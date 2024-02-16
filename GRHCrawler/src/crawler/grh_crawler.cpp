#include <iostream>

#include "crawler/grh_crawler.h"

using namespace std;

namespace grh::crawler {
    void GRHCrawler::run(config::GRHCrawlerConfig config) {
        //Call out to each configured site by category 
        
    }

    db::GRHCrawlerSiteData GRHCrawler::data() {
        return _data;
    }

    void GRHCrawler::parse(db::GRHCrawlerSiteData siteData) {
        myhtml_t* myhtml = myhtml_create();
        myhtml_tree_t* tree = myhtml_tree_create();
        
        myhtml_init(myhtml, MyHTML_OPTIONS_DEFAULT, 1, 0);
        myhtml_tree_init(tree, myhtml);
        
        const char * html = siteData.data.rawData.c_str();
        size_t htmlSize = siteData.data.rawData.size();
        myhtml_parse(tree, MyENCODING_UTF_8, html, htmlSize);
        
        mycore_string_raw_t str = {0, 0, 0};
        myhtml_serialization_tree_buffer(myhtml_tree_get_document(tree), &str);
        
        cout << "\nParsed tree:" << endl;
        cout << str.data << endl;
        
        mycore_string_raw_destroy(&str, false);
        myhtml_tree_destroy(tree);
        myhtml_destroy(myhtml);
    }
}
