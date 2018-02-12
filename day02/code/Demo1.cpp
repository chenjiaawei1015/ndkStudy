// Demo1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

// ==============================================

//int main()
//{
//	// #include 
//	// 对于系统定义的头文件,引用时可以使用""或<>
//	// 对于自定义的头文件,只可以使用""
//
//	system("pause");
//	return 0;
//}

// ==============================================

//int main()
//{
//	// 指针运算
//	int a = 10;
//	int *p = &a;
//	*p = *p + 1;
//	printf("%d\n", *p);	// 11
//
//	*p += 1;
//	printf("%d\n", *p);	// 12
//
//	printf("%d\n", (*p)++);	// 12
//
//	// p 指向的地址已经发生变化
//	*p++;	// 等价 *(p++)	
//	printf("%d\n", *p);
//
//	system("pause");
//	return 0;
//}

// ==============================================

//int main()
//{
//	// 数组与指针
//	int arr[5];
//	int *p = arr;
//
//	// p + i 等价 &arr[i] 等价 arr + i
//
//	for (int i = 0; p < arr + 5; p++)
//	{
//		*p = i;
//		i++;
//	}
//
//	system("pause");
//	return 0;
//}

// ==============================================

//void swip(int *num1, int *num2){
//	int temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//}
//
//int main()
//{
//	// 指针与函数参数
//	// 案例:交换两个数据的值
//	int i = 10, j = 20;
//	int *p = &i;
//	int *q = &j;
//	swip(p, q);
//	printf("%d , %d \n", *p, *q);
//
//	system("pause");
//	return 0;
//}

// ==============================================

//void sortArr(char* arr[], int arrLength){
//	char* temp;
//	int index = 0;
//	int inner_index;
//	for (; index < arrLength - 1; index++)
//	{
//		inner_index = index + 1;
//		for (; inner_index < arrLength; inner_index++)
//		{
//			if (strcmp(arr[index], arr[inner_index]) > 0)
//			{
//				temp = arr[index];
//				arr[index] = arr[inner_index];
//				arr[inner_index] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	// 指针数组
//	// 排序
//	char* name[] = { "Android", "Java", "Kotlin", "C", "C++" };
//	sortArr(name, 5);
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%s\n", name[i]);
//	}
//
//	system("pause");
//	return 0;
//}

// ==============================================

//int main()
//{
//	// 数组指针
//	char *p[5];	// 等价 *(p[5])
//	// 指针数组
//	char(*p1)[5];
//	system("pause");
//	return 0;
//}

// ==============================================

int main()
{
	// 二级指针
	int a = 10;
	int *p1 = &a;
	int **p2 = &p1;

	printf("%d\n", *p1);
	printf("%d\n", **p2);

	system("pause");
	return 0;
}

// ==============================================

//int main()
//{
//	system("pause");
//	return 0;
//}

