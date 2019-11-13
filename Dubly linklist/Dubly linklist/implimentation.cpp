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
	cNode *n = new cNode();
	n->value = value;
	if (head == NULL)
	{
		head = n;
	}
	else
	{
		n->next = head;
		head = n;
		n->prev = head;
	}
	return 1;
}
bool cDublyLinkList::insertAtTail(int value)
{
	cNode *n = new cNode();
	n->value = value;
	if (head == NULL)
	{
		head = n;
	}
	else
	{
		cNode *ptr = head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = n;
		n->prev = ptr;
		ptr = NULL;
	}
	return 1;
}
bool cDublyLinkList::insertAtIndex(int index, int value)//ask about logic
{

	return 1;
}
//edit
bool cDublyLinkList::updateAt(int index, int value)
{

	return 1;
}
//del
bool cDublyLinkList::deleteFromStart()
{

	return 1;
}
bool cDublyLinkList::deleteFromEnd()
{

	return 1;
}
bool cDublyLinkList::deleteAt(int index)
{

	return 1;
}
//length
int cDublyLinkList::listLength()
{

	return 1;
}
//print
bool cDublyLinkList::printList()
{
	if (head == NULL)
	{
		cout << "list is empty" << endl;
		return 0;
	}
	else
	{
		cNode *ptr = head;
		int counter = 1;
		while (ptr != NULL)
		{
			cout << counter << "=> " << ptr->value << endl;
			counter++;
			ptr = ptr->next;
		}
		ptr = NULL;
		return 1;
	}
}