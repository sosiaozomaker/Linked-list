#include <stdio.h>
#include <stdlib.h>
#define LIST_INIT_SIZE 100//����ռ�ĳ�ʼ������
#define LISTINCREMENT 10//�ռ�ķ�������
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
void Create(LinkList &head);//����������
void Add_L(LinkList &head, ElemType e);//��ֵ
ElemType GetElem_L(LinkList &head, int i);//����iλ��ֵ����ֵ
Status Find_L(LinkList &head, ElemType e);//����e��λ��
Status Insert_L(LinkList &head, int i, ElemType e);//��iλ�ò���Ԫ��e
Status Detele_L(LinkList &head, int i);//ɾ��iλ�õ�Ԫ��
void Modify(LinkList &head, int i, ElemType e);//�޸�iλ�õ�Ԫ��
void Compare(ElemType &a1, ElemType &a2);//�Ƚ�������������
void Compare_L(LinkList &head);//����
void Print_L(LinkList &head);//��ӡ