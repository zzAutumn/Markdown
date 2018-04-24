//线性表的顺序存储-----一维数组
#define MAXSIZE 30      /*存储空间初始分配量*/
#define OK 1        /*状态定义*/
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int ElemType;    /*ElemType类型根据实际情况而定，这里假设为int*/
typedef int Stauts;     /*Status是函数的类型，其值是函数结果状态码，如OK等*/
typedef struct
{
    ElemType data[MAXSIZE];     /*数组存储根据元素，最大值为MAXSIZE*/
    int length;        /*线性表当前长度*/
}SqList;

void initList(SqList *L)        /*这里的初始条件是线性表中已存在一个元素，并且初始值为0*/
{
    L->length = 1;
    L->data[L->length-1] = 0;
}

Stauts GetElem(SqList L,int i,ElemType *e)
{
    if (L.length == 0 || i < 1 || i > L.length) {   /*初始条件：顺序线性表L已存在，1<=i<=L.length*/
        return ERROR;
    }
    *e = L.data[i-1];
    return OK;
}

Stauts ListInsert(SqList *L,int i,ElemType e)   /*在线性表L中的第i个位置插入新元素e*/
{
    int k;
    if (L->length == MAXSIZE)   /*当顺序线性表已经满了*/
        return ERROR;
    if (i < 1 || i > L->length)     /*当插入的位置不在范围内*/
        return ERROR;
    if (i <= L->length)     /*当插入的位置不在表尾*/
    {
        for (k = L->length-1;k >= i-1;k--)
            L->data[k+1] = L->data[k];
    }
    L->data[i-1] = e;
    L->length++;
    return OK;
}

Stauts ListDelete(SqList *L,int i,ElemType *e)  /*在线性表L中的第i个位置删除元素，并获得删除元素e*/
{
    int k;
    if (L->length == 0)     /*如果线性表为空的话，就不应该删除*/
        return ERROR;
    if (i < 1 || i > L->length)     /*如果删除的元素不在合理范围内*/
        return ERROR;
    *e = L->data[i-1];   /*保存删除的元素*/
    for (k = i;k < L->length;k++)
        L->data[k-1] = L->data[k];
    L->length--;
        return OK;
}
