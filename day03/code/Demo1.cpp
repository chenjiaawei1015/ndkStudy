// Demo1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

// ================================================================

//int plus(int a, int b){
//	return a + b;
//}
//
//int minus(int a, int b){
//	return a - b;
//}
//
//int main()
//{
//	// 函数指针
//	// 函数指针的定义方式
//	// 返回值类型(*函数指针名称)(参数类型1 参数名称, ...)
//	int(*calc)(int a, int b);
//	// 函数名称是一个函数的首地址
//	calc = plus;
//
//	int res = calc(3, 4);
//	printf("%d\n", res);
//
//	calc = minus;
//	res = calc(3, 4);
//	printf("%d\n", res);
//
//	system("pause");
//	return 0;
//}

// ================================================================

//int plus(int *a, int *b){
//	return *a + *b;
//}
//
//int minus(double *a, double *b){
//	return *a - *b;
//}
//
//int main()
//{
//	int value1 = 3, value2 = 4;
//	double value3 = 3.0, value4 = 4.0;
//
//	// 函数指针
//	// 多态效果
//	int(*calc)(void* a, void* b);
//	
//	// plus 不能直接赋值给 calc , 必须进行类型转换
//	calc = (int(*)(void*, void*))plus;
//
//	int res = calc(&value1, &value2);
//	printf("%d\n", res);
//
//	calc = (int(*)(void*, void*))minus;
//	res = calc(&value3, &value4);
//	printf("%d\n", res);
//
//	system("pause");
//	return 0;
//}

// ================================================================

//int *p(int *a, int *b){
//	// 这是一个返回值为指针的函数
//}
//
//int main()
//{
//	// 函数指针
//	int(*p)(int*a, int*b);
//
//	system("pause");
//	return 0;
//}

// ================================================================

//int main()
//{
//	// 静态分配内存,数据存储在栈空间中
//	// 分配的内存有限
//	// 编译器自动申请及自动释放
//	// 预编译阶段必须明确类型及大小
//	// int arr[1024 * 1024 * 10];	// 报错
//
//	// 动态内存分配,数据存储在堆空间中
//	// 分配的内存远大于栈空间分配的内存
//	// 编译器手动申请及手动释放
//	int *p = (int *)malloc(sizeof(int)* 1024 * 1024 * 10);
//	if (p == NULL){
//		printf("内存分配失败\n");
//	}
//	else
//	{
//		printf("内存分配成功\n");
//	}
//	// 释放内存
//	delete(p);
//
//	system("pause");
//	return 0;
//}

// ================================================================

//int main()
//{
//	// 动态分配内存 calloc 
//	// 第一个参数 : 需要分配多少条数据
//	// 第二个参数 : 每条数据占用的字节数
//
//	// 分配4块空间,每块内存占据1M内存
//	int *p = (int *)calloc(4, 1024 * 1024);
//	if (p == NULL)
//	{
//		printf("分配空间失败");
//	}
//	else{
//		printf("分配空间成功");
//	}
//
//	// 与 malloc 的不同
//	// 1. 分配大小的计算方式不同
//	// 2. calloc 会进行默认初始化, malloc 不会做初始化
//	// 3. calloc 申请的内存,每块内存与其他内存的地址不是连续的
//	//    malloc 申请的内存是连续的
//
//	delete(p);
//
//	system("pause");
//	return 0;
//}

// ================================================================

//int main()
//{
//	// 内存释放
//	int *p = (int*)calloc(4, 1024 * 1024);
//
//	// C 中可以用 free 进行释放
//	// C++ 中既可以使用 free 也可以使用 delete 进行释放
//	free(p);
//
//	// 这里可以获取 p 的地址 ( 野指针 )
//	// 为了防止后续误操作,释放完成后一般将变量重新设置为 NULL
//	p = NULL;
//
//	// 注意点
//	// 1. 用一块内存 free 不能调用多次
//	// 2. 一般释放完后,建议将变量重新赋值为 NULL
//	// 3. 申请和释放必须一一对应,不能申请多次,然后只释放一次
//
//	system("pause");
//	return 0;
//}

// ================================================================

//int main()
//{
//	char arr1[] = "Android";
//	arr1[0] = 'B';	// 正确
//	printf("%s\n", arr1);
//	// arr1 是常量地址 , 不能将一个地址赋值给常量
//	// arr1 = temp_arr;	// 错误
//
//	char* str = "Android";
//	// 错误
//	// str[0] = 'C';	
//
//	// 正确
//	str = "Java";
//	printf("%s\n", str);
//
//	system("pause");
//	return 0;
//}

// ================================================================

//int main()
//{
//	system("pause");
//	return 0;
//}

