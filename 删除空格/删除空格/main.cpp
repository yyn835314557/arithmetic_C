//
//  main.cpp
//  删除空格
//
//  Created by 游义男 on 15/9/7.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include <iostream>
using namespace::std;

/**%u 十进制无符号整数
%f 浮点数
%s 字符串
%c 单个字符
%p 指针的值
%e 指数形式的浮点数
%x, %X 无符号以十六进制表示的整数
%0 无符号以八进制表示的整数
%g 自动选择合适的表示法
*/
// 指针即为地址，指针几个字节跟语言无关，而是跟系统的寻址能力有关，譬如以前是16为地址，指针即为2个字节，现在一般是32位系统，所以是4个字节，以后64位，则就为8个字节。sizeof(指针) ％x 16地址
// int strlen(const char *) 测量字符串长度的函数->Int strlen只能用char*做参数，且必须是以''\0''结尾的 （%s -> char数组）
//string solve(const char *str){
//    const char *start = str;
//    const char *end = str + std::strlen(str);
//    while(*start == ' ')
//            start++;
//    while (*end == ' ')
//            end--;
//        return (string(start,end - start));
//    }

void remove(char *str){
    if (!str || strlen(str) == 0) {
        return;
    }
    char *p =str;
    while (p[0] == ' ') {
        p++;
    }
    int len  = strlen(p);
    if (len < 1) {
        str[0] = '\0';
        return;
    }
    while (p[len -1] == ' ') {
        len --;
        p[len] = '\0';
        strncpy(str, p, strlen(p)+1); //char*strncpy(char*dest,char*src,size_tn) 将s2指向的字符串的前n个长度的字符放到s1指向的字符串中
    }
}



void trim(char *str){
    if (NULL == str || 0 == strlen(str)) {
        return;
    }
    char *p1 = str;
    char *p2 = str + strlen(str) -1;
    while (p2>str && *p2 == ' ' ){
            p2--;
        }
        p2++;
    *p2 = 0;
    while (*p1 && *p1 == ' ') {
        p1++;
    }
    strncpy(str, p1, p2-p1+1);
}



int main(int argc, const char * argv[]) {
    // insert code here...
//    string str = solve(argv[1]);
//    std::cout << argv[1]<<"------>"<<str<<endl;
    
    string s3[10] = {"1","2","3"};
    char s1[10] = "abcd";
    char s2[10] = "ABCDEF";
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
//    prinf("s1=%s\ns2=%s\n",s1,s2);
    return 0;
}
