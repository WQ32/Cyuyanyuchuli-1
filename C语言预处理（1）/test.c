#include <stdio.h>

//Linux 
// ls 保存
// 
// 预编译
// gcc -E test.c    预编译，预处理（文本操作）  1. 进行头文件的包含(#include ),将头文件中的内容都放在.c文件中去了
//                   2.注释删除，使用空格替换注释  3.主要完成预处理指令，如#define（定义一个符号），会被替换
// gcc -E test.c >test.i 将test.c中的内容写到test.i中去(默认生成a.out)，vim test.i是打开test.i这个文件
//
//rm -f test.s 删除文件
//
// 预编译      --  把C代码翻译成汇编代码，由编译来完成 - 语法分析 词法分析 语义分析 符号汇总（把全局变量，函数名进行汇总）
// 讲编译原理 - 书  - 《程序员的自我修养》
// gcc -S test.c   
// gcc -S test.i   自动生成test.s文件，里面存的是汇编指令（代码）
//
