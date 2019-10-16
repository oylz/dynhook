#!/bin/bash

NPID=`ps auxf | grep program | grep -v grep | awk '{print $2}'`

#./bin/dynhook --pid $NPID --hook ./libtestso.so@_Z4stubi:hooked_function:set_ptr

#./bin/dynhook --pid $NPID --hook ./libtestso.so@_ZN1A7DoPrintEd:hooked_ff:set_ff

#./bin/dynhook --pid $NPID --hook ./libtestso.so@_ZN1A7DoPrintEd:hooked_ff:set_ff --hook ./libtestso.so@_Z4stubi:hooked_function:set_ptr


NPID=`ps auxf | grep  "\./nydbc"  | grep  "conf/config.ini" | awk '{print $2}'`
#./bin/dynhook --pid $NPID --hook ./libtestso.so@_ZN13nydbc_handler10sql_updateERKN3com7yealink3dbc3idl17sql_update_filterE:hook_hh:set_hh

#./bin/dynhook --pid 23592 --hook ./libtestso.so@_ZZN13nydbc_handler10sql_updateERKN3com7yealink3dbc3idl17sql_update_filterEE12__FUNCTION__:hook_hh:set_hh


# class ff_node
NPID=`ps auxf | grep program | grep -v grep | awk '{print $2}'`
./bin/dynhook --pid $NPID --hook ./libtestso.so@_ZN2ff7processERKN5boost10shared_ptrI9ff_node_nEE:hook_pp:set_pp
#./bin/dynhook --pid $NPID --hook ./libtestso.so@_ZN1A7DoPrintEd:hooked_ff:set_ff


# nydbc
#NPID=`ps auxf | grep  "\./nydbc"  | grep  "conf/config.ini" | awk '{print $2}'`
#./bin/dynhook --pid $NPID --hook ./libtestso.so@_ZN13nydbc_handler10sql_updateERKN3com7yealink3dbc3idl17sql_update_filterE:hook_hh:set_hh



