// Demo1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>

// ==================================================

//// 第1种定义
//struct Student
//{
//	char name[20];
//	int age;
//};
//
//// 第2种定义
//struct Student1
//{
//	char name[20];
//	int age;
//}Lucy;	// Lucy 全局的结构体成员变量
//
//// 第3种定义 : 匿名结构体
//struct {
//	char name[20];
//	int age;
//}LiLy, Tom = { "Tom", 21 };
//
//int main()
//{
//	// 初始化
//	struct Student stu1 = { "Jack", 20 };
//
//	struct Student stu2;
//	strcpy(stu2.name, "Rose");
//	stu2.age = 18;
//
//	printf("%s\n", stu1.name);
//	printf("%s\n", stu2.name);
//	printf("%s\n", Tom.name);
//
//	system("pause");
//	return 0;
//}

// ==================================================

//struct Student
//{
//	char* name;
//	int age;
//};
//
//int main()
//{
//	// 结构体数组
//	struct Student stu1[3] = { { "Jack", 10 }, { "Rose", 20 }, { "Tom", 30 } };
//	
//	struct Student stu2[5];
//	stu2[0].name = "Jack";
//	stu2[0].age = 10;
//
//	system("pause");
//	return 0;
//}

// ==================================================

//struct Student
//{
//	char* name;
//	int age;
//};
//
//int main()
//{
//	// 结构体指针
//	struct Student stu1[3] = { { "Jack", 10 }, { "Rose", 20 }, { "Tom", 30 } };
//	struct Student *p = stu1;
//
//	struct Student *p1;
//	p1 = (Student*)malloc(sizeof(struct Student) * 5);
//	// 设置初始值为0
//	memset(p1, 0, sizeof(struct Student) * 5);
//
//	struct Student *back_p1 = p1;
//
//	int index = 0;
//	for (; index < 5; index++)
//	{
//		p1->name = "Jack";
//		p1->age = index + 10;
//		p1++;
//	}
//
//	p1 = back_p1;
//	index = 0;
//	for (; index < 5; index++)
//	{
//		printf("name = %s , age = %d \n", p1[index].name, p1[index].age);
//	}
//
//	delete(p1);
//
//	system("pause");
//	return 0;
//}

// ==================================================

//struct Student
//{
//	char* name;
//	int age;
//	int(*show_info)(char* ,int);
//};
//
//int info1(char* name, int age){
//	printf("info1 name = %s , age = %d \n", name, age);
//	return 0;
//}
//
//int main()
//{
//	// 结构体中定义函数指针变量
//	struct Student s1;
//	s1.name = "Jack";
//	s1.age = 20;
//	s1.show_info = info1;
//	s1.show_info(s1.name, s1.age);
//
//	system("pause");
//	return 0;
//}

// ==================================================

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//Node* add_node(Node* last_node, int data){
//	Node* node = (Node*)malloc(sizeof(Node));
//	if (node == NULL)
//	{
//		return NULL;
//	}
//	node->data = data;
//	last_node->next = node;
//	return node;
//}
//
//int main()
//{
//	// 在结构体中定义结构体指针变量
//	// 案例:单链表
//	Node* list;
//	list = (Node*)malloc(sizeof(Node)* 10);
//	// 初始化第一个元素
//	list->data = 0;
//	list->next = NULL;
//
//	int i = 1;
//	Node* temp = list;
//	for (; i < 10; i++)
//	{
//		temp = add_node(temp, i);
//	}
//
//	i = 0;
//	for (; i < 10; i++)
//	{
//		printf("%d \n", list->data);
//		list = list->next;
//	}
//
//	system("pause");
//	return 0;
//}

// ==================================================

//typedef int _int;
//typedef char* String;
//
//typedef int(*PFI)(String, String);
//
//int method1(String str1, String str2){
//	return 0;
//}
//
//int method2(String str1, String str2){
//	return 1;
//}
//
//int main()
//{
//	// typedef 为某种类型定义别名
//	_int num = 10;
//	printf("%d\n", num);
//
//	// 为 char* 定义一个 String 的别名
//	String str = "Android";
//	printf("%s\n", str);
//
//	// 通过 typedef 使用函数指针
//	PFI pfi = method1;
//
//	system("pause");
//	return 0;
//}

// ==================================================

//struct TreeNode{
//	char* data;
//	LeftNode left;
//	RightNode right;
//};
//
//typedef TreeNode* LeftNode;
//typedef TreeNode* RightNode;
//
//int main()
//{
//	// 结构体中使用 typedef
//	// 案例:模拟二叉树结构
//	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
//
//	system("pause");
//	return 0;
//}

// ==================================================

//union MyUnion
//{
//	int data1;
//	char data2;
//	double data3;
//};
//
//int main()
//{
//	// 联合体/共用体 union
//	// 将不同数据类型的数据放置到同一块内存中
//
//	// 联合体类型占据的字节数为所有成员类型占用最大字节数类型成员对应的字节数
//	printf("MyUniion 占据的大小 : %d \n", sizeof(MyUnion));	// 8
//
//	// 每个成员的地址都是相同的
//	MyUnion* union1 = (MyUnion*)malloc(sizeof(MyUnion));
//	printf("%#x , %#x , %#x \n", union1->data1, union1->data2, union1->data3);
//
//	union1->data1 = 1;
//	union1->data2 = 'A';
//	printf("%d\n", union1->data1);	// 65
//	union1->data3 = 97.0;
//	printf("%c\n", union1->data2);	// a
//
//	delete(union1);
//
//	system("pause");
//	return 0;
//}

// ==================================================

enum 
{
	// 没有赋值的情况下,第一个数据为1,下一个数据为上个数据+1
	data1,	// 0
	data2 = 10,	// 10
	data3,	// 11
	data4	// 12
};

int main()
{
	// 枚举
	printf("%d , %d , %d , %d \n", data1, data2, data3, data4);
	system("pause");
	return 0;
}

// ==================================================

//int main()
//{
//	system("pause");
//	return 0;
//}

