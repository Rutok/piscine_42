cat /etc/passwd | grep ^\[^#\] | cut -d : -f1 | awk '(NR+1)%2' | rev | sort -r | awk -v LINE1="$FT_LINE1" -v LINE2="$FT_LINE2" 'NR>=LINE1 && NR<=LINE2 { print }' | tr "\n" "," | sed 's/,/, /g' | rev | cut -c 3- | rev | tr '\n' '.'
