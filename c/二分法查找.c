#include <stdio.h>
//二分法查找函数，这里的形参有指向数组的指针，还有数组长度len，注意当要传入
//一个数组作为参数时，应用一个指针变量，如果要计算数组的长度，在函数里面不能计算，不能用sizeof(list)/sizeof(int)。
void search_binary(int *list,int item,int len)
{
    int mid,guess;
    int low = 0;
    int high = len-1;

    while(low<=high)    //只要范围没有缩小到只包含一个元素
    {
        mid = (low+high)/2;
        guess = list[mid];

        if(guess<item)
        {
            low = mid+1;
        }
        else if(guess>item)
        {
            high = mid-1;
        }
        else
        {
            printf("这个数在数组中的位置为：%d\n",mid);
            return;      //跳出函数，注意break只能跳出循环
        }
    }

    printf("这个数没有在数组中\n");
}

int main()
{

    int a[7] = {1,4,6,8,10,15,22};
    int item = 15;
    int len = sizeof(a)/sizeof(int);
    search_binary(a,item,len);     //这里的变量a其实是指向数组第一个元素的地址


    return 0;
}
