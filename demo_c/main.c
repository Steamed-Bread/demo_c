//
//  main.c
//  demo0811
//  变量 https://blog.csdn.net/k346k346/article/details/52252626
//  Created by 徐星 on 2018/8/11.
//  Copyright © 2018年 徐星. All rights reserved.
//

#include <stdio.h>
//常量定义 一般为大写
#define MY_AGE 100
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4
//编译时
const int i=10000;
//运行时
typedef int32_t xuxing;
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
//    float a=3.0;
////    4字节
//    double b=3.0;
////    8字节
//    long double c=3.0;
////    16字节
//    printf("a=%f,b=%f,c=%Lf\n",a,b,c);
////    a=3.000000,b=3.000000,c=3.000000
//    printf("a=%f,b=%f,c=%f\n",a,b,c);
////    a=3.000000,b=3.000000,c=0.500000
    
 // ------------字符--------------------
//        printf("hello\nworld\n");
//        printf("hello\rworld\n");
////    回车符
//        printf("hello\bworld\n");
////    回退符
//        printf("hello\tworld\n");
////    制表符
//
////    hello
////    world
////    world
////    hellworld
////    hello    world
//
//      printf("length of char %d\n",sizeof(char));
////    字符为一个字节
//    char ch='a';
//     printf("char %d\n",ch);
//     printf("char %c\n",ch);
//     printf("char %c\n",ch-32);
////    char 97
////    char a
////    char A
//     printf("char %s\n","aaaa");
    
    
 // ------------自定义数据类型--------------------
//    xuxing a=1000;
//    printf("自定义 %d\n",a);
//    return 0;
  
 // ------------if--------------------
//    int i=88;
//    if (i>85) {
//        printf("优秀\n");
//    } else if(i>60) {
//        printf("及格\n");
//    } else {
//        printf("不及格\n");
//    }
  // ------------switch--------------------
//    int s=UP;
//    switch (s) {
//        case UP:
//             printf("UP\n");
//            break;
//        case DOWN:
//            printf("DOWN\n");
//            break;
//        case LEFT:
//            printf("LEFT\n");
//            break;
//        case RIGHT:
//            printf("RIGHT\n");
//            break;
//        default:
//            printf("NO ANSWER\n");
//            break;
//    }

    
  // ------------goto label--------------------
//    int g=0;
//    g++;
//    if (g<100) {
//        goto label1;
//    }
//
//    label:
//    printf("%d\n",g);
//    printf("%d\n",g);
//
//    label1:
//    printf("%d\n",g);
//    printf("%d\n",g);
    
   // ------------for--------------------
//    for (int i=1; i<=9; i++) {
//        for (int j=1; j<=i; j++) {
//            if (i*j==5) {
////                goto end;
////                continue;
//                //不跳出循环，重新开始循环
////                break;
//                //跳出循环
//            }
//            printf("%d*%d=%d\t",i,j,i*j);
//        }
//        printf("\n");
//
//    }
//    end:
//    printf("\n");
    
    
    // ------------while do while --------------------
//    int w=1;
//    while (w<1) {
//        printf("w=%d\n",w);
//        w++;
//    }
//    
//    do{
//        printf("w=%d\n",w);
//        w++;
//    }while (w<1);
    return 0;
}


