#include <iostream>
#include <string.h>
using namespace std;

//class Person
//{
//friend	void visitbedroom(Person& p);
//public:
//	Person(int age);
//	Person(string name);
//	Person(string room, int);
//	~Person();
//	Person& personadd(Person& p);
//	int get_age(void);
//	void const_funcation(Person* p)const;
//private:
//	mutable string name;
//	int age;
//	string bedroom;
//};
//
//Person::Person(int age)
//{
//	this->age = age;
//}
//
//Person::Person(string name)
//{
//	this->name = name;
//}
//
//Person::Person(string room, int)
//{
//	this->bedroom = room;
//}
//
//Person::~Person()
//{
//	cout << "xigou funcation" << endl;
//}
//
//Person& Person::personadd(Person& p)
//{
//	this->age += p.age;
//	return *this;
//}
//
//int Person::get_age(void)
//{
//	return this->age;
//}
//
//void Person::const_funcation(Person* p)const
//{
//	if (p == NULL)
//	{
//		return;
//	}
//	this->name = p->name;
//	cout << "name =" << this->name << endl;
//}
//
//void test(void)
//{
//	Person p1(10);
//	Person p2(10);
//
//	p2.personadd(p1);
//
//	p2.personadd(p1).personadd(p1);
//
//	cout << "P2 age = " << p2.get_age() << endl;
//	
//	Person p3("zhangsan");
//
//	p2.const_funcation(&p3);
//}
//
//void visitbedroom(Person& p)
//{
//	cout << "bedroom " << p.bedroom << endl;
//}
//
//void test02(void)
//{
//	Person p1("my bedroom", 10);
//	visitbedroom(p1);
//}
//
////learn web:https://blog.csdn.net/weixin_46585199/article/details/116138837
//int main(void)
//{
//	test();
//	test02();
//	system("pause");
//	return EXIT_SUCCESS;
//}


//class Base
//{
//public:
//	void func(void);
//	int m_A;
//};
//
//void Base::func(void)
//{
//	m_A = 100;
//}
//
//class Son
//{
//public:
//	void func(void);
//	int m_A;
//};
//
//void Son::func(void)
//{
//	//this->m_A = Base::m_A; //这样的赋值，右边的写法语法不允许
//	m_A = 200;
//}
//
//void test(void)
//{
//	Son s;
//	s.func();
//	//s.m_A = Base::m_A; //这样的赋值，右边的写法语法不允许
//	cout << "Son m_A: " << s.m_A << endl;
//}
//
//int main(void)
//{
//	test();
//	char arr[] = "hello";
//	char* arr1 = NULL;
//	//char* arr2 = "hellow"; //这种写法错误
//	cout << "arr[] : " << sizeof(arr) << endl;
//	cout << "arr1 : " << sizeof(arr1) << endl;
//	cout << "short : " << sizeof(short) << endl;
//	cout << "长度=: " << strlen("c:\test\628\test.c") << endl; //这个\t是占用一个字节
//
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++) //不进入循环，因为循环判断条件就是0
//	{
//		k++;
//		cout << "hehe" << endl;
//	}
//		
//
//	system("pause");//主要时防止程序调试的时候闪退
//	return EXIT_SUCCESS;
//}

//#include "easyx.h" //图形界面头文件
//#include "mmsystem.h" //多媒体系统头文件
//#pragma comment(lib,"winmm.lib") //C - 预处理库文件包含
////#include <easyx>
////学习地址-夜曲.mp3：https://www.bilibili.com/video/BV1ga411B71U?spm_id_from=333.337.search-card.all.click
//int main(void)
//{
//	initgraph(480, 680);
//
//	system("pause");
//}

//int main()
//{
//    int arr[] = { 11,12,13,14,15 };
//    int* ptr = arr;
//    *(ptr++) += 100;
//    printf("%d %d\n", *ptr, *(++ptr));
//    return 0;
//}
