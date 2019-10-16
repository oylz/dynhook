#include <stdio.h>
//#include <string>
//#include <string.h>
//#include <sys/types.h>
#include "base.h"



    void ff::process(const ff_node &fn){
        fprintf(stderr, "this:%lx, fn.addr:%lx, fn.get().addr:%lx, fn:(%s, %d)\n", this, &fn, fn.get(), fn->name_.c_str(), fn->age_);
    }
    void ff::process(const std::string &str, uint64_t num, const ff_node &fn, char chr){
        fprintf(stderr, "this:%lx, str.addr:%lx, num:%lx, fn.addr:%lx, fn.get().addr:%lx, fn:(%s, %d), chr:%x\n", this, &str, num, &fn, fn.get(), fn->name_.c_str(), fn->age_, chr);
    }

int main(int argc, char **argv){
    getchar();

    
    ff_node fn(new ff_node_n("Jason", 5));
    ff f;
    f.process(fn);


    return 0;
}
