#ifndef GRH_CRAWLER_DATA_H_
#define GRH_CRAWLER_DATA_H_

#include <string>

using namespace std;

class GRHDocument {
public:
    string rawData;
};

class GRHCrawlerSiteData {
public:
    GRHDocument data;
};

#endif
