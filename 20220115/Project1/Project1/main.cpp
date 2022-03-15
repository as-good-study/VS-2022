#include <iostream>
#include <string.h>
using namespace std;

class Person
{
public:
	Person(int age);
	~Person();
	Person& personadd(Person& p);
	int get_age(void);
private:
	int age;
};

Person::Person(int age)
{
	this->age = age;
}

Person::~Person()
{
	cout << "xigou funcation" << endl;
}

Person& Person::personadd(Person& p)
{
	this->age += p.age;
	return *this;
}

int Person::get_age(void)
{
	return this->age;
}

void test(void)
{
	Person p1(10);
	Person p2(10);

	p2.personadd(p1);

	p2.personadd(p1).personadd(p1);

	cout << "P2 age = " << p2.get_age() << endl;
}

int main(void)
{
	test();
	system("pause");
}