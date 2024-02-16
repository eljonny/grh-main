#include <iostream>
#include <stdexcept>

#include "SitesLexer.h"
#include "SitesParser.h"
#include "antlr4-runtime.h"
#include "crawler/config/grh_crawler_config.h"
#include "crawler/util/grh_io_utils.h"

using namespace antlr4;
using namespace antlrcpp;

namespace grh::crawler::config {
    void GRHCrawlerConfig::configLoad(string configFile) {
        cout << "Loading GRH Crawler configuration file " << configFile << endl;
        
        GRHCrawlerConfig::validateConfigPath(configFile);
        
        ANTLRInputStream input(grh::crawler::util::read_file(configFile));
        cout << "GRH Crawler configuration file " << configFile << " loaded"
             << " into token stream buffer." << endl;
        
        SitesLexer lexer(&input);
        cout << "Tokens loaded into configuration lexer." << endl;
        
        CommonTokenStream tokens(&lexer);
        cout << "Lexer loaded into token stream." << endl;
        
        cout << "Preparing token stream..." << endl;
        tokens.fill();
        cout << "Token stream ready." << endl;
        
        for (auto token : tokens.getTokens()) {
          cout << token->toString() << endl;
        }

        SitesParser parser(&tokens);
        cout << "Token stream loaded into parser. Parsing..." << endl;
        tree::ParseTree* tree = parser.sites();
        cout << "Configuration parsed successfully." << endl;

        cout << tree->toStringTree(&parser) << endl << endl;
    }

    void GRHCrawlerConfig::dataListLoad(string dataFile) {
        GRHCrawlerConfig::validateConfigPath(dataFile);
    }

    void GRHCrawlerConfig::validateConfigPath(string path) {
        cout << "Validating GRH Crawler configuration file " << path << endl;
        
        if(path.find("..") != string::npos) {
            throw invalid_argument(string("Illegal characters in file path! ").append(path));
        }
        
        cout << "GRH Crawler configuration file " << path << " validated." << endl;
    }
}
