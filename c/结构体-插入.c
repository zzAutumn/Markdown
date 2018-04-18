//链表节点结构体
#include <stdio.h>


typedef struct Node
{
    int data;
    struct Node *pNext;
}*PNODE,NODE;



int main(void)
{
    //有a,b两个顺序的结构体单元，现往a,b中插入c结构体
    PNODE p,q;    //结构体指针变量
    NODE a,b,c;   //结构体变量
    p = &c;       //给p这个指针变量c结构体的位置
    q = &b;       //给q这个指针变量b结构体的位置
    a.pNext = p;    //a结构体的下一个指针元素赋予p指针变量，也就是c的地址
    c.pNext = q;    //c结构体的下一个指针元素赋予q指针变量，也就是b的地址
    c.data = 5;     //给c结构体的data成员变量赋予5
    printf("%d\n",(a.pNext)->data);   //验证a结构单元的下一个指针元素变量所指向的结构体是否是c
    return 0;
}
