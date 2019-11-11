#include<iostream>
#include"Header.h"
using namespace std;
cNode::cNode()
{
	this->key = 0;
	this->next = NULL;
}
cLinkList::cLinkList()
{
	this->head = NULL;
}
bool cLinkList::insertionAtHead(int value)
{
	cNode *n = new cNode();
	n->key = value;
	if (this->head == NULL)//if head is empty
	{
		this->head = n;
		return 1;
	}
	else
	{
		n->next = head;
		this->head = n;
		return 1;
	}
	return 0;
}
bool cLinkList::insertionAtIndex(int index, int value)
{
	return 0;
}
bool cLinkList::insertionAtEnd(int value)
{
	cNode *n = new cNode();
	n->key = value;
	if (this->head == NULL)//if head is empty
	{
		this->head = n;
		return 1;
	}
	else
	{
		cNode *ptr = head;
		while (ptr->next!=NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = n;
		return 1;
	}
	return 0;

}
bool cLinkList::updateValueAt(int index, int value)
{
	int count = 1;
	cNode *ptr = head;
	while (ptr!=NULL&&count<=index)
	{
		if (count == index)
		{
			ptr->key = value;
			return 1;
		}
		count++;
		ptr = ptr->next;
	}
	cout << "invalid index" << index << endl;
	return 0;
}
bool cLinkList::deleteFromStart()
{
	if (this->head == NULL)
	{
		cout << "nothing to delete" << endl;
		return 0;
	}
	else
	{
		cNode*ptr = head;
		head = head->next;
		ptr->next = NULL;
		return 1;
	}
}
bool deleteFromEnd()
{
	return 0;
}
bool deleteAtIndex()
{
	return 0;
}
bool cLinkList::printList()
{
	cNode *ptr = head;
	while (ptr!=NULL)
	{
		cout << ptr->key << endl;
		ptr = ptr->next;
	}
	return 0;
}