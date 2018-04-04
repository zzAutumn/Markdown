> 输出到某个文件
>> 输出并追加到某个文件

for done 循环
        1 #!/bin/bash
        2 sum=0
        3 for a in {1..10}
        4     do
        5         b=`expr $b + $a`   #注意表达式要用特殊的单引号括起来
        6     done
        7 echo "sum=$sum"
        
计算1-100之间所有奇数之和
          1 #!/bin/bash                                                                 
          2 sum=0
          3 for i in {1..100..2}
          4     do
          5         let sum+=i
          6     done
          7 echo "sum=$sum"
          
          
类c风格的循环
          1 #!/bin/bash                                                                 
          2 for((i=1;i<5;i++))
          3 do
          4     echo "$i"
          5 done
          


