#include <stdio.h>
#include <iostream>

extern "C" {

typedef void (*FUNCTION_PTR)(int);

FUNCTION_PTR PTR;

void set_ptr( FUNCTION_PTR ptr ) {
  PTR = ptr;
}

void hooked_function( int u ) {
  std::cout<<"Hooked!\n";
  std::cout<<"Hello From Hooked Function\n";
  std::cout<<"See:"<<u<<"\n";
  PTR(u);
}

// ---for cpp class member function-------
typedef void (*FF)(void *, double ); 
FF ff;
void set_ff( FF in ) {
  ff = in;
}
void hooked_ff(void *a, double v){
  std::cout<<"Hooked ff!\n";
  std::cout<<"Hello From Hooked Function ff, v:[" << v << "]\n";
  ff(a, v); 
}

}
