* 反转二叉树(MirrorTree)
***

```C
TreeNode{
	TreeNode left,right;
	DataType data;
}
void NonRecursive_Exchange(TreeNode *T)
{
    Stack s;
    TreeNode *p;
    if (NULL == T)
        return;
    InitStack(&s);
    Push(&s, T);
    while (!isEmpty(&s))
    {
        T = Pop(&s);
        p = T->left;
        T->left = T->right;
        T->right = p;
        if (T->right )
            Push(&s, T->right );
        if (T->left )
            Push(&s, T->left );
    }
    DestroyStack(&s);
}
```