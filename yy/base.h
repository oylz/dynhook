#ifndef _BASEH_
#define _BASEH_
#include <boost/shared_ptr.hpp>
#include <stdint.h>

struct ff_node_n{
    std::string name_;
    int age_;
    ff_node_n(const std::string &name, int age){
        name_ = name;
        age_ = age;
    }
};
typedef boost::shared_ptr<ff_node_n> ff_node;


class ff{
public:
    void process(const ff_node &fn);
    void process(const std::string &str, uint64_t num, const ff_node &fn, char chr);
};


#endif



