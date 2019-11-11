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
	l1.insertionAtEnd(4);
	l1.insertionAtEnd(3);
	l1.insertionAtEnd(2);
	l1.updateValueAt(6, 6);
	l1.updateValueAt(5, 5);
	l1.updateValueAt(0, 0);
	l1.updateValueAt(-1, -1);
	l1.printList();
	system("pause");
	return 0;
}