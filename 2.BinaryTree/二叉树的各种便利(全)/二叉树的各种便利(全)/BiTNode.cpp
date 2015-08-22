//
//  BiTNode.cpp
//  二叉树的各种便利(全)
//
//  Created by 游义男 on 15/8/22.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include <iostream>
#include <stack>
#include <queue>
#include "BiTNode.hpp"

int BinaryTreeNode::CreateBiTree(BiTree &T){
    char data;
    scanf("%c",&data);
    
    if (data == '#') {
        T = NULL;
    }else{
        T = (BiTree)malloc(sizeof(BiTNode));
        T -> data = data;
        CreateBiTree(T ->lchild);
        CreateBiTree(T ->rchild);
    }
    return 0;
}

void BinaryTreeNode::Visit(BiTree T){
    if (T ->data != '#') {
        printf("%c",T->data);
    }
}// 输出函数
void PreOrder(BiTree T);//先序遍历
void InOrder(BiTree T);//中序遍历
void PostOrder(BiTree T);//后续遍历