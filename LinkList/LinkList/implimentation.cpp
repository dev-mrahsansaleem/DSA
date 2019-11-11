#include<iostream>
#include"cNode.h"
#include"cLinkList.h"
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
	if (this->head == NULL)//if head is empty
	{
		head->key = value;
	}
	else
	{
		cNode *n = new cNode();
		n->key = value;
		n->next = head;
		head = n;
	}
}
bool cLinkList::insertionAtIndex(int index, int value)
{

}
bool cLinkList::insertionAtEnd(int value)
{

}