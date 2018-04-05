cat 1.txt | grep 'aaa'      将1.txt中含有'aaa'的内容找出来，按每行查找。
wc -l  1.txt 查看某个文件的行数
ls | wc -l   查看当前目录下文件的个数
find ./ -type f  列出当前目录下所有的文件
find ./ -type f | wc -l  查看当前目录下文件的个数 

管道符 | 把前面执行完的命令结果交给后面的命令

ctrl + z 暂定任务

每个用户家目录下的系统配置文件：~/.bash_profile  ~/.bashrc  可以添加环境变量到这里面

特殊符号：
    * 任意个任意字符
    ？任意一个字符
    #注释字符
    | 管道符
    \ 脱义字符（转义）
    
几个和管道相关的命令
    cut分隔，-d分隔符 -f指定段号 -c指定第几个字符
    sort排序，-n以数字排序 -r反序 -t分隔符
    wc -l 统计行数 -m统计字符数 -w统计词
    uniq去重，-c统计行数
    tee 和 > 类似，重定向的同时还在屏幕上显示
    tr替换字符，tr 'a' 'b'，大小写替换tr '[a-z]' '[A-Z]'
    split切割，-b大小（默认单位字节），-l行数
    
    uniq和sort一起用，先排序完后在去重
    
grep的几个用法
    grep 'mysql' 1.txt      'mysql'所在行
    grep  -c 'mysql' 1.txt      'mysql'出现行的内容
     grep  -n 'mysql' 1.txt      'mysql'所在行的行号
    grep -o 'mysql' 1.txt | wc -l     'mysql'出现的次数
    

