#!/bin/sh

find . -name "*.sh" -print | rev | cut -c 4- | cut -d / -f1 | rev
