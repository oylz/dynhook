#!/bin/bash

NPID=`ps auxf | grep program | grep -v grep | awk '{print $2}'`

./bin/dynhook --pid $NPID --hook ./libtestso.so@_Z4stubi:hooked_function:set_ptr




