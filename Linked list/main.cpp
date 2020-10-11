#include"Link.h"
int main()
{
	LNode *head;
	Create(head);
	Add_L(head, 2);
	Add_L(head, 3);
	Add_L(head, 5);
	Add_L(head, 5);
	Add_L(head, 5);
	
	Add_L(head, 5);
	Print_L(head);
	printf("%d\n", GetElem_L(head, 2));
	printf("%d\n", Find_L(head, 1));
	Modify(head, 2, 0);
	Modify(head, 1, 234);
	Print_L(head);
	Compare_L(head);
	Print_L(head);
	Add_L(head, 46);
	Add_L(head, 12);
	Add_L(head, 90);
	Print_L(head);
	Compare_L(head);
	Print_L(head);
	system("pause");
	return 0;
}