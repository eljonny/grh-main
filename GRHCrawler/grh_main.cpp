#include <iostream>

#include "crawler/grh_crawler.h"
#include "crawler/db/grh_crawler_db.h"

using namespace std;

int main(int argc, char **argv)
{
    cout << "Starting main GRH periodic operations" << endl;
    
    GRHCrawlerConfig config;
    config.configLoad(string(argv[1]));
    config.dataListLoad(string(argv[2]));
    
    GRHCrawler crawler;
    crawler.run(config);
    
    GRHCrawlerDB db;
    db.load(crawler.data());
    
    return 0;
}
