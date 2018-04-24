#include <stdio.h>
#include "SeList.h"


int main(void)
{
    SqList sq_list;
    ElemType val = 1;
    ElemType e;
    initList(&sq_list);     /*下标0----1*/
    ListInsert(&sq_list,1,val);
    ListInsert(&sq_list,1,2);
    ListInsert(&sq_list,1,3);
    //GetElem(sq_list,1,&get);
    ListDelete(&sq_list,2,&e);
    printf("删除的元素是：%d\n",e);
    
    return 0;
}
