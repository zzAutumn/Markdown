#include <stdio.h>


int main()
{
    int len = 1032;
    int count = 0;

    while(len!=0 && len!=1)
    {
        count++;
        len = len/2;
    }

    printf("最多需要%d步才能找到\n",count);



    return 0;
}


//结果，若len=128 ----->7步
//len=256 -------->8步
//len=512 -------->9步
//所以随着有序列表长度的倍增，所需步数也相应多一步。
