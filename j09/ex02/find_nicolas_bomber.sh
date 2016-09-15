cat $1 | grep -i "bomber" | grep '[Nn]' | grep -v Escroc | grep '[0-9][0-9|-]\{1,\}\s' -o | grep  -v '\<42\>'
