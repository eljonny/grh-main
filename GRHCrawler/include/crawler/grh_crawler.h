#ifndef GRH_CRAWLER_H_
#define GRH_CRAWLER_H_

#include <myhtml/api.h>

#include "config/grh_crawler_config.h"
#include "db/grh_crawler_db.h"

class GRHCrawler {
public:
    void run(GRHCrawlerConfig config);
    GRHCrawlerSiteData data();
    
private:
    GRHCrawlerSiteData _data;

    void parse(GRHDocument rawData);
};

#endif
