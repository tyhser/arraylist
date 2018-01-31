#ifndef LINKED_LIST_H
#define LINKED_LIST_H
typedef unsigned int LenType; 
typedef struct Node
{
	void *pdata;
	LenType DataLen;
	struct Node *prior;
	struct Node *next;
}NodeType;

typedef struct 
{
	LenType ListLen;
	LenType MaxNodeCount;
	NodeType *head_pointer;
	NodeType *tail_pointer;
}LinkedListType;


#endif
