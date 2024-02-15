#include <fstream>
#include <iostream>

#include "crawler/util/grh_io_utils.h"

namespace grh::crawler::util {
    auto read_file(string_view path) -> string {
        cout << "Reading file " << path << endl;
        
        constexpr auto read_size = size_t(4096);
        auto stream = ifstream(path.data());
        stream.exceptions(ios_base::badbit);

        if (not stream) {
            throw ios_base::failure("file does not exist");
        }
        
        auto out = string();
        auto buf = string(read_size, '\0');
        while (stream.read(& buf[0], read_size)) {
            out.append(buf, 0, stream.gcount());
        }
        out.append(buf, 0, stream.gcount());
        
        cout << "File " << path << " read into buffer." << endl;
        
        return out;
    }
}
