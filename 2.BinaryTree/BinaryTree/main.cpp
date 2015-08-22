//
//  main.cpp
//  BinaryTree
//
//  Created by 游义男 on 15/8/17.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
//system("pause");

using namespace std;
// typedef 定义别名


// 顺序存储结构
// 二叉树 链式存储结构
typedef struct BiTNode{
    char data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

// 二叉树的创建
// 通过读入一个字符串，建立二叉树算法
// 按照先序序列创建二叉树
int CreateBiTree(BiTree &T){
    char data;
    scanf("%c",&data);
    if (data == '#') {
        T = NULL;
    }else{
        T = (BiTree)malloc(sizeof(BiTNode));
        T ->data = data;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

struct {
    int x;
    int y;
}test1;
struct test {
    int x;
    int y;
}test2;

typedef struct Test{
    int x;
    int y;
}text1,text2;

typedef struct{
    int x;
    int y;
} test3;











