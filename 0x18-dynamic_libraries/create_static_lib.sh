#!/bin/bash
find . -name "*.c" -type f -exec gcc -c '{}' +
for f in *.o ;
do
	ar -rcs liball.a "$f"
done
