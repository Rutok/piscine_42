ldapsearch -Q | grep cn: | cut -d ' ' -f 3- | grep '.BON\b\|\bBON.\|.BON.' | wc -l | xargs
