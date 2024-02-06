#ifndef GRH_CRAWLER_CONFIG_H_
#define GRH_CRAWLER_CONFIG_H_

#include <vector>

using namespace std;

class GRHDataList {
    string name;
    string loadTime;
    vector<string> dataList;
};

class GRHConfigMap {
    GRHDataList usStates;
};

class GRHCrawlerConfig {
public:
    void configLoad(string configFile);
    void dataListLoad(string dataFile);
    
private:
    GRHConfigMap _config;
};

#endif