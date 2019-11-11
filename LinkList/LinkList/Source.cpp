#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	cLinkList l1;
	l1.insertionAtHead(1);
	l1.insertionAtHead(2);
	l1.insertionAtHead(3);
	l1.insertionAtHead(4);
	l1.insertionAtHead(5);
	l1.insertionAtHead(6);
	l1.insertionAtHead(7);
	l1.insertionAtHead(8);
	l1.insertionAtHead(9);
	cout << "length of list is" << l1.lenList() << endl;
	l1.printList();
	system("pause");
	return 0;
}