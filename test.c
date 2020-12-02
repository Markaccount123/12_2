#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.程序的翻译环境
//2.程序的执行环境
//3.详解：C语言程序的编译 + 链接
//4.预定义符号介绍
//5.预处理指令 #define
//6.宏和函数的对比 
//7.预处理操作符#和##的介绍
//8.命令定义
//9.预处理指令#include
//10.预处理指令 #undef 
//11.条件编译
//int main()
//{
//	printf("%s\n",__FILE__);//进行编译的源文件 (当前文件的绝对路径)
//	printf("%d\n", __LINE__); //文件当前的行号
//	printf("%s\n", __DATE__); //文件被编译的日期
//	printf("%s\n",__TIME__); //文件被编译的时间
//	//__STDC__; //如果编译器遵循ANSI C，其值为1，否则未定义
//	return 0;
//}


//#define SQUARE(X) X*X
//int main()
//{
//	//int ret = SQUARE(5); // 宏气的作用是替换，把X替换为5，然后作后面的5*5运算
//	int ret = SQUARE(5 + 1);// 5+1*5+1 = 5+5+1 = 11
//	return 0;
//}

//#deﬁne 替换规则
//在程序中扩展#deﬁne定义符号和宏时，需要涉及几个步骤。 
//1. 在调用宏时，首先对参数进行检查，看看是否包含任何由#deﬁne定义的符号。如果是，它们首先被替换。 
//2. 替换文本随后被插入到程序中原来文本的位置。对于宏，参数名被他们的值替换。
//3. 最后，再次对结果文件进行扫描，看看它是否包含任何由#deﬁne定义的符号。如果是，就重复上述处理过程。
//注意：
//1. 宏参数和#deﬁne 定义中可以出现其他#deﬁne定义的变量。但是对于宏，不能出现递归。 
//2. 当预处理器搜索#deﬁne定义的符号的时候，字符串常量的内容并不被搜索。

//
//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);  //the value of a is 10 
//	PRINT(b);  // the value of b is 20
//	return 0;
//}

//#define CAT(X,Y) X##Y
//int main()
//{
//	int Class84 = 2019;
//	printf("%d\n", CAT(Class, 84));
//	//printf("%d\n",Class##84);
//	//printf("%d\n",Class84);
//	//所以结果是   2019
//	return 0;
}


//#define MAX(X,Y)   (X)>(Y)?(X):(Y)
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	printf("%d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	//int ret = sizeof(int);
//	printf("%d\n", ret);
//	return 0;
//}

#define MALLOC(num,type) (type*)malloc(num*sizeof(type))


int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	int* p = MALLOC(10, int);
  //int* p = (int*)malloc(10*sizeof(int));
	return 0;
}