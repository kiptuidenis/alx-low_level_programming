#!/bin/bash

if [[ $(getconf LONG_BIT) == "64" ]]; then
  max_pid=$((2**63 - 1))
else
  max_pid=$((2**31 - 1))
fi

echo "The maximum value for a process ID is: $max_pid"
