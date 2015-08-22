//
//  BiTNode.hpp
//  二叉树的各种便利(全)
//
//  Created by 游义男 on 15/8/22.
//  Copyright © 2015年 游义男. All rights reserved.
//

#ifndef BiTNode_cpp
#define BiTNode_cpp

#include <stdio.h>


class BinaryTreeNode{
    
    typedef struct BiTNode{
        char data;
        struct BiTNode * lchild;
        struct BiTNode * rchild;
    }BiTNode,*BiTree;

// 创建二叉树 按照先序序列创建二叉树
    int CreateBiTree(BiTree &T);
    
//递归算法:
    void Visit(BiTree T);// 输出函数
    void PreOrder(BiTree T);//先序遍历
    void InOrder(BiTree T);//中序遍历
    void PostOrder(BiTree T);//后续遍历
    
//非递归算法:
    void PreOrder2(BiTree T);//先序遍历2
    void InOrder2(BiTree T);//中序遍历2
    typedef struct BiTNodePost{
        BiTree biTree;
        char tag;
    }BiTNodePost,*BiTreePost;
    void PostOrder2(BiTree T);//后续遍历2

};
#endif /* BiTNode_cpp */
