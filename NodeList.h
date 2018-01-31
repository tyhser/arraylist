// coding by yakir
// power by NKET
// time: 2017.05.04
// vertion: v1.0.0
#ifndef NODE_LIST_H
#define NODE_LIST_H
#define ENABLE_ALL_INTERRUPT 	//__enable_irq
#define DISABLE_ALL_INTERRUPT	//__disable_irq
typedef struct Node{
	void *pData;//ָ����������ָ��
	struct Node *Next;//ָ����һ���ڵ�
	struct Node *Pre;//ָ����һ����Ч�ڵ�
}NodeType;

typedef struct{
	int Node_DataSize;	//�ڵ����ݴ�С
	int ListLen;		//�����ж೤--������ڵ�ĸ���
	int MaxNodeCount;	//���ڵ����
	NodeType *pHead;	//ָ��ͷ�ڵ�
	NodeType *pEnd;		//ָ�����һ����Ч�ڵ�
	
}NodeListType;

/*
* function	: NodeList_Init
* parameter	:
*			  NodeList, ��Ҫ��ʼ�������������
*			  Node_DataSize, �ڵ��С,���ֽڶ���---sizeof
*			  MaxNodeCount, ֧���������ڵ����
* return 		: none
* descrition	: ��ʼ�����������
*/
extern void NodeList_Init(NodeListType *NodeList, int Node_DataSize, int MaxNodeCount);

/*
* function 	: NodeList_AddNode
* parameter	: 
*			  NodeList,���������
*			  pBuf, ��Ҫ�洢�������е�����,���С����ͳ�ʼ��ʱ���Node_DataSizeһ��
* return		: 
*			  -1,���������Ϊ��
*			  -2,����ڵ����Ѿ��ﵽ����,�����������
*			    0,�ڵ���ӳɹ�
* descrition	: �ڵ���ӵ�λ��Ϊ��������������
*/
extern int NodeList_AddNode(NodeListType *NodeList, void *pBuf);


/*
* function 	: NodeList_RemoveNodeAt
* parameter	: 
*			  NodeList,���������
*			    at,��Ҫɾ���Ľڵ��λ��(��һ����Ч�ڵ��Ӧ��index=0)
* return		: 
*			  -1,���������Ϊ��
*			  -2,����ڵ���Ϊ0,���ܽ���ɾ���ڵ����
*			    0,�ڵ�ɾ���ɹ�
* descrition	: �ڵ�ɾ����λ��Ϊ�����������ǰ��
*/
extern	int  NodeList_RemoveNodeAt(NodeListType *NodeList, int at);




/*
* function 	: NodeList_ReadNodeAt
* parameter	: 
*			  NodeList,���������
*			  at,��Ҫ��ȡ�Ľڵ��λ��(��һ����Ч�ڵ��Ӧ��index=0)
*			  pRet,�����洢��Ҫ��ȡ�Ľڵ������
* return		: 
*			  -1,���������Ϊ��
*			  -2,����ֵ���Ϸ�
*			    0,��ȡ�ɹ�
* descrition	: ��ȡ��Ӧ�ڵ������
*/
int NodeList_ReadNodeAt(NodeListType *NodeList, int at, void *pRet);


/*
* function name 	: NodeList_GetLen
* parameter		: NodeList, ���������
* return			: ��������ڵ����(������)
*/
extern int NodeList_GetLen(NodeListType *NodeList);


#endif



