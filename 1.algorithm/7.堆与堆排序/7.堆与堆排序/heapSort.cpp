//
//  heapSort.cpp
//  7.堆与堆排序
//
//  Created by 游义男 on 15/8/24.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include "heapSort.hpp"
#include <iostream>
#include <algorithm>

// 从1开始
void HeapSort::HeapAdjust(int *a, int i, int size){
    int lchild = 2 * i;
    int rchild = 2 * i + 1;
    int max = i;//临时变量
    if (i<= size/2) {
        if(lchild<=size&&a[lchild]>a[max])
        {
            max=lchild;
        }
        if(rchild<=size&&a[rchild]>a[max])
        {
            max=rchild;
        }
        if(max!=i)
        {
            std::swap(a[i],a[max]);
            HeapAdjust(a,max,size);    //避免调整之后以max为父节点的子树不是堆
        }
    }
}
