// Demo1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

// ==============================================

//int main()
//{
//	// #include 
//	// ����ϵͳ�����ͷ�ļ�,����ʱ����ʹ��""��<>
//	// �����Զ����ͷ�ļ�,ֻ����ʹ��""
//
//	system("pause");
//	return 0;
//}

// ==============================================

//int main()
//{
//	// ָ������
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
//	// p ָ��ĵ�ַ�Ѿ������仯
//	*p++;	// �ȼ� *(p++)	
//	printf("%d\n", *p);
//
//	system("pause");
//	return 0;
//}

// ==============================================

//int main()
//{
//	// ������ָ��
//	int arr[5];
//	int *p = arr;
//
//	// p + i �ȼ� &arr[i] �ȼ� arr + i
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
//	// ָ���뺯������
//	// ����:�����������ݵ�ֵ
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
//	// ָ������
//	// ����
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
//	// ����ָ��
//	char *p[5];	// �ȼ� *(p[5])
//	// ָ������
//	char(*p1)[5];
//	system("pause");
//	return 0;
//}

// ==============================================

int main()
{
	// ����ָ��
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

