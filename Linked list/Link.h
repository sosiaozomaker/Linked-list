#include <stdio.h>
#include <stdlib.h>
#define LIST_INIT_SIZE 100//储存空间的初始分配量
#define LISTINCREMENT 10//空间的分配增量
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef int ElemType;
typedef int Status;
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;
void Create(LinkList &head);//创建空链表
void Add_L(LinkList &head, ElemType e);//赋值
ElemType GetElem_L(LinkList &head, int i);//查找i位置值返回值
Status Find_L(LinkList &head, ElemType e);//查找e的位置
Status Insert_L(LinkList &head, int i, ElemType e);//在i位置插入元素e
Status Detele_L(LinkList &head, int i);//删除i位置的元素
void Modify(LinkList &head, int i, ElemType e);//修改i位置的元素
void Compare(ElemType &a1, ElemType &a2);//比较两个数并排序
void Compare_L(LinkList &head);//排序
void Print_L(LinkList &head);//打印