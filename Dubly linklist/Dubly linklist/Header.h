class cNode
{
public:
	cNode *prev;
	int value;
	cNode *next;
};
class cDublyLinkList
{
public:
	cNode *head;
	//insert
	bool insertAtHead(int value);
	bool insertAtTail(int value);
	bool insertAtIndex(int index, int value);
	//edit
	bool updateAt(int index, int value);
	//del
	bool deleteFromStart();
	bool deleteFromEnd();
	bool deleteAt(int index);
	//length
	int listLength();
	//print
	bool printList();
};