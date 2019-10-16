#include <stdio.h>
#include <iostream>
#include "idl/nydbc_types.h"
#include "base.h"

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

#if 1
// ---for nydbc---------------------------
typedef int64_t (*HH)(void *, const com::yealink::dbc::idl::sql_update_filter &);
HH hh;
void set_hh( HH in ) {
  std::cout<<"set_hh!\n";
  hh = in;
}
int64_t hook_hh(void *a, const com::yealink::dbc::idl::sql_update_filter& filter){
  std::cout<<"Hooked hh!\n";
  std::cout<<"Hello From Hooked Function hh, filter.sql:[" << filter.sql << "]\n";
  return hh(a, filter);
}
#endif
// ---for instrument----------------------
typedef void (*PP)(void *, const ff_node &);
PP pp;
void set_pp( PP in ) {
  pp = in;
}
void hook_pp(void *a, const ff_node &fn){
  std::cout<<"Hooked pp!\n";
  std::cout<<"Hello From Hooked Function pp\n";
  pp(a, fn);
}

}






