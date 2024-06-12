cat /etc/passwd | grep ^# -v | sed -n "2,\${p;n;}" | awk -F':' '{print$1}' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ',' | sed -E 's/,/, /g'  | sed -E 's/, $/\./g' | tr -d '\n'
