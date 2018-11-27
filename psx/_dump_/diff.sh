#!/bin/bash

DIR='1 3 6 10 13 17 18 23 25 28 29 31 33 34 35 36'
for d1 in ${DIR}; do
	mkdir -p "${d1}/_diffs_"
	echo "Creating ${d1}/_diffs_/*.diff"
	for d2 in ${DIR}; do
		if [ "${d1}" -eq "${d2}" ]; then
			continue
		fi
		diff -U 0 "${d1}/names.txt" "${d2}/names.txt" | sar '[\n]@@[^\n]*' '' | sar '[\n][+]{3}[^\n]*' '' | sar '^[-]{3}[^\n]*[\n]' '' | sort | uniq > "${d1}/_diffs_/${d2}.diff"
	done
done

echo

for d1 in ${DIR}; do
	echo "=== [ diffs for ${d1} ] ==="
	echo
	ls -la ${d1}/_diffs_/*.diff | awk '{print $5 " " $9}' | sort -V | sar '\\.diff' "" | sar "/_diffs_/" " " | awk '{printf "directory %2s and %2s differ on %5s names\n", $2, $3, $1}'
	echo
done
