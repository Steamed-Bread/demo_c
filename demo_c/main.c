//
//  main.c
//  demo0811
//  变量 https://blog.csdn.net/k346k346/article/details/52252626
//  Created by 徐星 on 2018/8/11.
//  Copyright © 2018年 徐星. All rights reserved.
//

#include <stdio.h>
//常量定义
#define MY_AGE 100
//编译时
const int i=10000;
//运行时

int main(int argc, const char * argv[]) {
    // insert code here...
// ------------整型--------------------
//    int a;
//    int8_t t;
//    t=127;
//    //    强制int为8位，消除操作系统差别
//    unsigned int ua;
//    ua=0xffffffff;
//    //  四个字节
//    a=0xffffffff;
//    int c=011;
//    //    8进制
//    //    整形包含符号位
//    long b=100;
//    //long 受限于操作系统，在32位上为4个字节，在64位上为8个字节，long long强制表示为8个字节
//    printf("Hello, World!\n");
//    printf("unsigned int is %u\n",ua);
//    printf("int u is %u\n",a);
//    printf("int d is %d\n",a);
//    //    %u改变了变量类型
//    printf("long is %ld\n",b);
    
    
    
// ------------浮点--------------------
    float a=3.0;
//    4字节
    double b=3.0;
//    8字节
    long double c=3.0;
//    16字节
    printf("a=%f,b=%f,c=%Lf\n",a,b,c);
//    a=3.000000,b=3.000000,c=3.000000
    printf("a=%f,b=%f,c=%f\n",a,b,c);
//    a=3.000000,b=3.000000,c=0.500000
    return 0;
}


