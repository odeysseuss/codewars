#!/usr/bin/env bash

set -e

for f in *.c; do
    echo "CMD: gcc $f -o bin/${f%.c} -g3 -lm"
    gcc $f -o bin/${f%.c} -g3 -lm
done
