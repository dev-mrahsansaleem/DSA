#include<iostream>
using namespace std;
#include"Header.h"
//constructor
cNode::cNode()
{
	this->value = 0;
	this->next = NULL;
	this->prev = NULL;
}
cDublyLinkList::cDublyLinkList()
{
	this->head = NULL;
}
//insert
bool cDublyLinkList::insertAtHead(int value)
{

}
bool cDublyLinkList::insertAtTail(int value)
{

}
bool cDublyLinkList::insertAtIndex(int index, int value)
{

}
//edit
bool cDublyLinkList::updateAt(int index, int value);
//del
bool cDublyLinkList::deleteFromStart();
bool cDublyLinkList::deleteFromEnd();
bool cDublyLinkList::deleteAt(int index);
//length
int cDublyLinkList::listLength();
//print
bool cDublyLinkList::printList();