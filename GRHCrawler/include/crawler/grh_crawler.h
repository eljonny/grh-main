#ifndef GRH_CRAWLER_H_
#define GRH_CRAWLER_H_

#include <myhtml/api.h>

#include "config/grh_crawler_config.h"
#include "db/grh_crawler_db.h"

namespace grh::crawler {
    class GRHCrawler {
    public:
        void run(config::GRHCrawlerConfig config);
        db::GRHCrawlerSiteData data();
        
    private:
        db::GRHCrawlerSiteData _data;

        void parse(db::GRHCrawlerSiteData rawData);
    };
}

#endif
