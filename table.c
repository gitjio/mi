echo "Enter the number -"
read n
i=1
  while [ $i -le 10 ]
do
res=`expr $i \* $n`
# printing
echo "$n * $i = $res"
 ((++i)) 
done
