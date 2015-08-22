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