#!/bin/bash

NPID=`ps auxf | grep program | grep -v grep | awk '{print $2}'`

#./bin/dynhook --pid $NPID --hook ./libtestso.so@_Z4stubi:hooked_function:set_ptr

#./bin/dynhook --pid $NPID --hook ./libtestso.so@_ZN1A7DoPrintEd:hooked_ff:set_ff

./bin/dynhook --pid $NPID --hook ./libtestso.so@_ZN1A7DoPrintEd:hooked_ff:set_ff --hook ./libtestso.so@_Z4stubi:hooked_function:set_ptr
