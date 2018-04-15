#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess(randNum,userNum,count)
{
    if(userNum>randNum)
    {
        printf("猜的数大了，请重新输入:\n");
        int val;
        scanf("%d",&val);
        count++;
        guess(randNum,val,count);
    }
    else if(userNum<randNum)
    {
        printf("猜的数小了，请重新输入：\n");
        int val;
        scanf("%d",&val);
        count++;
        guess(randNum,val,count);
    }
    else
    {
        printf("恭喜您猜对了，您一共猜了%d次\n",count);
    }

}


int main(void)
{
    srand((unsigned)time(NULL));
    int i,count,val;
    i = rand()%100+1;
    count = 0;
    printf("请输入1-100之间的正整数开始猜数：\n");
    scanf("%d",&val);
    //printf("i=%d\n",i);
    guess(i,val,count);
    return 0;
}
    
