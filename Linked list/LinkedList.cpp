#include"Link.h"
int Count;
void Create(LinkList &head){
	head = NULL;
	Count = 0;
}
//����������
void Add_L(LinkList &head, ElemType e){
	Count++;
	if (Count == 1){
		LNode *temp;
		temp = (LNode*)malloc(sizeof(LNode));
		temp->next = head;
		temp->data = e;
		head = temp;
	}
	else {
		LNode *pre = head;
		while (pre->next != NULL){
			pre = pre->next;
		}
		LNode *temp;
		temp = (LNode *)malloc(sizeof(LNode));
		pre->next = temp;
		temp->data = e;
		temp->next = NULL;
	}
}
//��ֵ
ElemType GetElem_L(LinkList &head, int i){
	LNode *pre = head;
	int n = 1;
	if (i > Count || i < 1){ return ERROR; }
	while (pre != NULL){
		if (n == i){
			return pre->data;
			break;
		}
		pre = pre->next;
		n++;
	}
}
//����iλ��ֵ����ֵ
Status Find_L(LinkList &head, ElemType e){
	LNode *pre = head;
	int i = 1;
	while (pre != NULL){
		if (pre->data == e){
			return i;
			break;
		}
		i++;
		pre = pre->next;
	}
	return ERROR;
}
//����e��λ��
Status Insert_L(LinkList &head, int i, ElemType e){
	LNode *pre = head, *pIn, *ptemp;
	pIn = (LNode *)malloc(sizeof(LNode));
	ptemp = (LNode *)malloc(sizeof(LNode));
	if (i<1 || i>Count) return ERROR;
	if (i == 1){
		ptemp = head;
		pIn->data = e;
		pIn->next = ptemp;
		head = pIn;
		Count++;
	}
	else{
		for (int n = 1; n < i - 1; n++){
			pre = pre->next;
		}
		pIn->data = e;
		pIn->next = pre->next;
		pre->next = pIn;
		Count++;
	}
	return OK;
}
//��iλ�ò���Ԫ��e
Status Detele_L(LinkList &head, int i){
	LNode *pre = head;
	if (i<1 || i>Count){ return ERROR; }
	if (i == 1){
		head = head->next;
		free(pre);
		Count--;
	}
	else{
		LNode *ptemp;
		for (int n = 1; n < i - 1; n++){
			ptemp = pre;
			pre = pre->next;
		}
		ptemp->next = pre->next;
		free(pre);
		Count--;
	}
	return OK;
}
//ɾ��iλ�õ�Ԫ��
void Modify(LinkList &head, int i, ElemType e){
	LNode *pre=head;
	for (int n = 1; n < i; n++){
		pre = pre->next;
	}
	pre->data = e;
}
//�޸�iλ�õ�Ԫ��
void Compare(ElemType &a1, ElemType &a2){
	if (a1 > a2){
		ElemType t = a1;
		a1 = a2;
		a2 = t;
	}
}
//�Ƚ�������������
void Compare_L(LinkList &head){
	LNode *pre;
	for (int n = 0; n < Count;n++){
		pre = head;
		while (pre->next != NULL){
			Compare(pre->data, pre->next->data);
			pre = pre->next;
		}
	}
}
//����
void Print_L(LinkList &head){
	LNode *temp;
	temp = head;
	int i = 1;
	printf("Count=%d\n", Count);
	while (temp != NULL){
		printf("��%d������%d\n",i, temp->data);
		temp = temp->next;
		i++;
	}
}
//��ӡ