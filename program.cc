#include <iostream>
#include <cstdio>
#include <dlfcn.h>
#include <inttypes.h>
#include <iomanip>
#include <errno.h>
#include <cstring>
#include <unistd.h>
#include <boost/shared_ptr.hpp>
#include "base.h"

class B{
public:
    virtual void DoPrint(double v) = 0;
};

class A: public B{
private:

  int a ,b, c;
public:
  A(int _a,int _b,int _c):
    a(_a),
    b(_b),
    c(_c)
  {}

  void DoPrint(double V) {
    std::cout<<"A:"<<a<<std::endl;
    std::cout<<"B:"<<b<<std::endl;
    std::cout<<"C:"<<c<<std::endl;
    std::cout<<"V:"<<V<<std::endl;
  }
};

extern void stub( int u ) {
  if(u >0) {
    std::cout<<123;
    std::cout<<456;
    std::cout<<'\n';
  } else {
    std::cout<<555;
  }
}

    void ff::process(const ff_node &fn){
        fprintf(stderr, "this:%lx, fn.addr:%lx, fn.get().addr:%lx, fn:(%s, %d)\n", this, &fn, fn.get(), fn->name_.c_str(), fn->age_);
    }
    void ff::process(const std::string &str, uint64_t num, const ff_node &fn, char chr){
        fprintf(stderr, "this:%lx, str.addr:%lx, num:%lx, fn.addr:%lx, fn.get().addr:%lx, fn:(%s, %d), chr:%x\n", this, &str, num, &fn, fn.get(), fn->name_.c_str(), fn->age_, chr);
    }

int main() {
  getchar();
#if 1
    ff_node fn(new ff_node_n("Jason", 5));
    ff f;
    f.process(fn);
#else
    B *aa = new A(11, 22, 33);
    aa->DoPrint(44);
    delete aa;
#endif
  getchar();

  B *a = new A(11, 22, 33);
  a->DoPrint(44);
  delete a;
  getchar();

  B *na = new A(55, 66, 77);
  na->DoPrint(88);
  delete na;

  while(true) {
    stub(1);
    sleep(1);
  }
  return 0;
}
