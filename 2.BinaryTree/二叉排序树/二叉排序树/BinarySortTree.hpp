//
//  BinarySortTree.hpp
//  二叉排序树
//
//  Created by 游义男 on 15/8/22.
//  Copyright © 2015年 游义男. All rights reserved.
//

#ifndef BinarySortTree_cpp
#define BinarySortTree_cpp

#include <stdio.h>

class BinarySortTree{

    typedef struct BiTNode{
        int data;
        struct BiTNode *lchild;
        struct BiTNode *rchild;
    }BiTNode,*BiTree;

};

#endif /* BinarySortTree_cpp */
