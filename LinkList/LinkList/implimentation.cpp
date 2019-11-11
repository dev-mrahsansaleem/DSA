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
bool cLinkList::deleteFromEnd()
{
	if (this->head == NULL)
	{
		cout << "nothing to dell" << endl;
	}
	else if (this->head->next == NULL)
	{
		this->head = NULL;
		return 0;
	}
	else
	{
		cNode*ptr = head;
		cNode*ptrnext = head->next;
		while (ptrnext->next!=NULL)
		{
			ptr = ptr->next;
			ptrnext = ptrnext->next;
		}
		ptr->next = NULL;
		ptrnext = NULL;
		return 1;
	}
}
bool cLinkList::deleteAtIndex(int index)
{
	if (this->head == NULL || index<1)
	{
		cout << "invalid" << endl;
	}
	else if (index==1)//count=1
	{
		this->head = this->head->next;
		return 0;
	}
	else
	{
		int count = 1;
		cNode*ptr = head;
		cNode*ptrnext = head->next;
		while (ptrnext->next != NULL && count<index-1)
		{
			ptr = ptr->next;
			ptrnext = ptrnext->next;
			count++;
		}
		if (count == index - 1)
		{
			ptr->next = ptrnext->next;
			ptrnext = NULL;
		}
		else
		{
			cout << index << "exceed the length of list" << endl;
		}
		return 1;
	}
	return 0;
}
int cLinkList::lenList()
{
	int count = -1;
	if (this->head != NULL)
	{
		count = 1;
		cNode *ptr = head;
		while (ptr->next != NULL)
		{
			count++;
			ptr = ptr->next;
		}
		return count;
	}
	else
	{
		cout << "list is empty" << endl;
		return count;
	}
}
bool cLinkList::printList()
{
	if (this->head != NULL)
	{
		int count = 1;
		cNode *ptr = head;
		while (ptr != NULL)
		{
			cout << count++ << " =>" << ptr->key << endl;
			ptr = ptr->next;
		}
		return 1;
	}
	else
	{
		cout << "list is empty" << endl;
		return 0;
	}
}