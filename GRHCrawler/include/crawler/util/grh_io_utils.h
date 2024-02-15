#ifndef GRH_CRAWLER_UTIL_H_
#define GRH_CRAWLER_UTIL_H_

#include <string>

using namespace std;

namespace grh::crawler::util {
    auto read_file(string_view path) -> string;
}

#endif