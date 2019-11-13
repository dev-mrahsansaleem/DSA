#include<iostream>
using namespace std;
#include"Header.h"
int main()
{
	cDublyLinkList l1;
	l1.insertAtTail(4);
	l1.insertAtTail(3);
	l1.insertAtTail(2);
	l1.insertAtTail(1);
	l1.insertAtTail(0);
	l1.printList();
	system("pause");
	return 0;
}