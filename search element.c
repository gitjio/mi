IFS="|"
array=("1${IFS}5${IFS}4${IFS}3")
value="1"

if [[ "${IFS}${array[*]}${IFS}" =~ "${IFS}${value}${IFS}" ]]; then
	echo "the element is in the list"
else
	echo "the element is not in the list"
fi
