//
//  main.c
//  1.Sort
//
//  Created by 游义男 on 15/7/27.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    //时间复杂度O(1000+10+1000+10) = O(2*(M+N))

        int book[1001],i,j,t,n;
        for (i=0; i<=1000; i++) {
            book[i] = 0;
        }
        scanf("%d",&n);
        for (i=0; i<n; i++) {
            scanf("%d",&t);
            book[t]++;
        }
        for (i=1000; i>=0; i--) {
            for (j=1; j<=book[i]; j++) {
                printf("%d ",i);
            }
        }
        
    
    return 0;
}
