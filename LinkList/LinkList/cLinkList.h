class cLinkList
{
public:
	cNode *head;
	//constructor
	cLinkList();
	//insertion functions
	bool insertionAtHead(int value);
	bool insertionAtIndex(int index,int value);
	bool insertionAtEnd(int value);

};