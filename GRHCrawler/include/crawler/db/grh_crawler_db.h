#ifndef GRH_CRAWLER_DB_H_
#define GRH_CRAWLER_DB_H_

#include "grh_crawler_data.h"

namespace grh::crawler::db {
    class GRHCrawlerDB {
    public:
        void load(GRHCrawlerSiteData data);
    };
}

#endif
