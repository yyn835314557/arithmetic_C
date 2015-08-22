```C++
#include <iostream>
#include <stack>
#include <queue>

typedef struct BinaryTreeNode{
	char data;
	struct BinaryTreeNode *lchild;
	struct BinaryTreeNode *rchild;
}Node,*BTNode;

int CreateBinaryTree(BTNode &T){
	char data;
	scanf("%c",&data);
	if (data == '#')
	{	
		// 只有指针才赋值为NULL
		T = NULL;
	}else{
		// 切记要给指针分配内存
		T = (BTNode)malloc(sizeof(Node))
		T ->data = data;
		CreateBinaryTree(T->lchild);
		CreateBinaryTree(T->rchild);
	}
	return 0;
}

void Visit(BTNode T){
	if(T->data != '#'){
		printf("%c\n",T->data);
	}
}

void PreOrder(BTNode T){
	if (T != NULL)
	{
		Visit(T);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}

void InOrder(BTNode T){
	if (T != NULL)			
	{		
		InOrder(T->lchild);
		Visit(T);
		InOrder(T->rchild);
	}
}

void PostOrder(BTNode T){
	if (T != NULL)
	{
		PostOrder(T->lchild);
		PostOrder(T->rchild);
		Visit(T);
	}
}

int int main(int argc, char const *argv[])
{
	BTNode T;
	CreateBinaryTree(T);
	PreOrder(T);
	InOrder(T);
	PostOrder(T);
	return 0;
}

void PreOrder2(BTNode T){
	stack<BTNode> stack;
	BTNode p = T; // 遍历指针p
	while(p || !stack.empty()){
		if (p != NULL)
		{
			stack.push(p);
			printf("%c",p->data);
			p = p ->lchild;
		}else{
			p = stack.top();
			stack.pop();
			p ->rchild;
		}
	}
}

void Inorder2(BTNode T){
	stack<BTNode> stack;
	BTNode p = T;
	while(p || !stack.empty()){
		if (p != NULL)
		{
			stack.push(p);
			p = p ->lchild;
		}else{
			p = stack.top();
			printf("%c",p->data);
			stack.pop();
			p ->rchild;
		}
	}
}

//后续遍历
typedef struct BTNodePost
{
	BTNode btNode;
	char tag;
}BTNodePost,*btNodePost;
void PostOrder2(BTNode T){
	stack<btNodePost> stack;
	BTNode p = T;
	btNodePost BT;
	while(p != NULL || !stack.empty()){
		while(p != NULL){
			BT = (btNodePost)malloc(sizeof(BTNodePost))
			BT->btNode = p;
			BT ->tag = 'L';
			stack.push(BT);
			p = p->lchild;
		}
		while(!stack.empty() && (stack.top())->tag == 'R'){
			BT = stack.top();
			stack.pop();
			BT ->btNode = NULL;
			printf("%c",BT->btNode->data);
		}
		if (!stack.empty())		
		{
			BT = stack.top();
			BT ->tag = 'R';
			p = BT->btNode;
			p = p->rchild;
		}
	}
}

// 层次遍历 使用队列
void LevelOrder(BTNode T){
	queue<BTNode> queue;
	BTNode p = T;
	queue.push(p);
	while(!queue.empty()){
		p = queue.front();
		printf("%c",p->data);
		queue.pop();
		if (p->lchild != NULL)
		{
			queue.push(p->lchild);
		}
		if (p->rchild != NULL)
		{
			queue.push(p->rchild){
				queue.push(p->rchild);
			}
		}
	}
}

int int main(int argc, char const *argv[])
{
	BTNode T;
	CreateBinaryTree(T);
	// 递归遍历
	PreOrder(T);
	InOrder(T);
	PostOrder(T);
	// 非递归遍历
	PreOrder2(T);
	Inorder2(T);
	PostOrder2(T);
	LevelOrder(T);
	return 0;
}
```



























