#include <iostream>
#include <cstdio>
#include <dlfcn.h>
#include <inttypes.h>
#include <iomanip>
#include <errno.h>
#include <cstring>
#include <unistd.h>

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

int main() {
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
