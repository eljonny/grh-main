#ifndef GRH_CRAWLER_CONFIG_H_
#define GRH_CRAWLER_CONFIG_H_

#include <string>
#include <vector>

using namespace std;

namespace grh::crawler::config {
    template<class T>
    class GRHDataList {
        string name;
        string loadTime;
        vector<T> dataList;
    };

    class GRHConfigMap {
        GRHDataList<string> usStateAbbrevs;
        GRHDataList<string> usStateNames;
        GRHDataList<int> intlGAPages;
    };

    class GRHCrawlerConfig {
    public:
        void configLoad(string configFile);
        void dataListLoad(string dataFile);
        
    private:
        GRHConfigMap _config;
        
        void validateConfigPath(string path);
    };
}

#endif
