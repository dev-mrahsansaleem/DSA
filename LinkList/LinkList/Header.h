class cNode
{
public:
	int key;
	cNode *next;
	//constructor
	cNode();
};
class cLinkList
{
public:
	cNode *head;
	//constructor
	cLinkList();
	//insertion functions
	bool insertionAtHead(int value);
	bool insertionAtIndex(int index, int value);
	bool insertionAtEnd(int value);
	//edit value at index
	bool updateValueAt(int index, int value);
	//delete a node
	bool deleteFromStart();
	bool deleteFromEnd();
	bool deleteAtIndex();
	//print
	bool printList();
};