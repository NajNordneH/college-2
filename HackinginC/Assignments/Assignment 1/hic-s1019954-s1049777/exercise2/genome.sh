#!/usr/bin/env bash
set -euo pipefail

COUNT=$(cat $1 | tr -d '\n' | grep -o $2 | wc -l)

echo "$2 is found $COUNT times in $1"
