ldapsearch -Q  "(uid=z*)" | grep cn: | cut -d ' ' -f 2- | sort -dfr
