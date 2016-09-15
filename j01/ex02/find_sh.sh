find . -name "*.sh" -print | awk -F "/" '{ print $NF }' | rev | cut -c4- | rev
