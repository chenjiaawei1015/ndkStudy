// Demo1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>

// ==================================================

//// ��1�ֶ���
//struct Student
//{
//	char name[20];
//	int age;
//};
//
//// ��2�ֶ���
//struct Student1
//{
//	char name[20];
//	int age;
//}Lucy;	// Lucy ȫ�ֵĽṹ���Ա����
//
//// ��3�ֶ��� : �����ṹ��
//struct {
//	char name[20];
//	int age;
//}LiLy, Tom = { "Tom", 21 };
//
//int main()
//{
//	// ��ʼ��
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
//	// �ṹ������
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
//	// �ṹ��ָ��
//	struct Student stu1[3] = { { "Jack", 10 }, { "Rose", 20 }, { "Tom", 30 } };
//	struct Student *p = stu1;
//
//	struct Student *p1;
//	p1 = (Student*)malloc(sizeof(struct Student) * 5);
//	// ���ó�ʼֵΪ0
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
//	// �ṹ���ж��庯��ָ�����
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
//	// �ڽṹ���ж���ṹ��ָ�����
//	// ����:������
//	Node* list;
//	list = (Node*)malloc(sizeof(Node)* 10);
//	// ��ʼ����һ��Ԫ��
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
//	// typedef Ϊĳ�����Ͷ������
//	_int num = 10;
//	printf("%d\n", num);
//
//	// Ϊ char* ����һ�� String �ı���
//	String str = "Android";
//	printf("%s\n", str);
//
//	// ͨ�� typedef ʹ�ú���ָ��
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
//	// �ṹ����ʹ�� typedef
//	// ����:ģ��������ṹ
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
//	// ������/������ union
//	// ����ͬ�������͵����ݷ��õ�ͬһ���ڴ���
//
//	// ����������ռ�ݵ��ֽ���Ϊ���г�Ա����ռ������ֽ������ͳ�Ա��Ӧ���ֽ���
//	printf("MyUniion ռ�ݵĴ�С : %d \n", sizeof(MyUnion));	// 8
//
//	// ÿ����Ա�ĵ�ַ������ͬ��
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
	// û�и�ֵ�������,��һ������Ϊ1,��һ������Ϊ�ϸ�����+1
	data1,	// 0
	data2 = 10,	// 10
	data3,	// 11
	data4	// 12
};

int main()
{
	// ö��
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

