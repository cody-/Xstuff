#!/bin/bash

pid=`ps aux | awk '/Xcode$/ { print $2 }'`
open -n Xstuff.xcodeproj
kill -TERM $pid
