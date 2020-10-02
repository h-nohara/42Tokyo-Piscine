cat /etc/passwd \
| awk 'NR % 2 == 0 { print $0 }' \
| grep -v '^#' \
| cut -f 1 -d ":" \
| rev \
| sort -r \
| sed -n "${FT_LINE1},${FT_LINE2}p" \
| tr '\n' ',' \
| sed -e 's/,$/./'