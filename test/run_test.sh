#!/bin/bash

echo Initializing test script

if python3 test_lib/$1; then
    echo "Exit code of 0, success"
else
    echo "Exit code of $?, failure"
fi
