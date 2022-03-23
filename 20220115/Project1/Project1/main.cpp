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


class Base
{
public:
	void func(void);
	int m_A;
};

void Base::func(void)
{
	m_A = 100;
}

class Son
{
public:
	void func(void);
	int m_A;
};

void Son::func(void)
{
	//this->m_A = Base::m_A; //这样的赋值，右边的写法语法不允许
	m_A = 200;
}

void test(void)
{
	Son s;
	s.func();
	//s.m_A = Base::m_A; //这样的赋值，右边的写法语法不允许
	cout << "Son m_A: " << s.m_A << endl;
}

int main(void)
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}