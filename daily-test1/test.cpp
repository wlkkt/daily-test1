///////////////////////////////////////////继承与组合
////组合
//class A
//{
//private:
//	int _a;
//};
//
//class B
//{
//private:
//	A __aa;
//	int _b;
//};
//
//
////继承
//class A
//{
//private:
//	int _a;
//};
//
//class B : public A
//{
//private:
//	int _b;
//};
///////////////////////////////////////////多态：析构函数重写

////普通场景:是否是虚函数都无所谓
//#include <iostream>
//using namespace std;
//class A {};
//class B : public A {};
//
//class Person {
//public:
//	virtual A* BuyTicket() 
//	{
//		cout << "买票-全价" << endl;
//		return nullptr;
//	}
//
//	 ~Person() 
//	{ 
//		cout << "~Person()" << endl; 
//	}
//};
//
//class Student : public Person 
//{
//public:
//	virtual B* BuyTicket() 
//	{
//		cout << "买票-半价" << endl;
//		return nullptr;
//	}
//
//	~Student()
//	{ 
//		cout << "~Student()" << endl;
//	}
//};
//
//int main()
//{
//	Person p;	
//	Student s;
//	return 0;
//}


////特殊场景：初阶
//#include <iostream>
//using namespace std;
//class A {};
//class B : public A {};
//
//class Person {
//public:
//	virtual A* BuyTicket()
//	{
//		cout << "买票-全价" << endl;
//		return nullptr;
//	}
//
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//};
//
//class Student : public Person
//{
//public:
//	virtual B* BuyTicket()
//	{
//		cout << "买票-半价" << endl;
//		return nullptr;
//	}
//
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//};
//
//int main()
//{
//	//基类类型的指针，既可以指向基类对象也可以指向派生类对象，对派生类而言是因为有切片切割的概念存在
//	Person* p1 = new Person;
//	Person* p2 = new Student;
//
//	delete p1;
//	delete p2;
//
//	return 0;
//}


//特殊场景：延申1
//#include <iostream>
//using namespace std;
//class A {};
//class B : public A {};
//
//class Person {
//public:
//	virtual A* BuyTicket()
//	{
//		cout << "买票-全价" << endl;
//		return nullptr;
//	}
//
//	virtual ~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//};
//
//class Student : public Person
//{
//public:
//	virtual B* BuyTicket()
//	{
//		cout << "买票-半价" << endl;
//		return nullptr;
//	}
//
//	virtual ~Student() //派生类的成员指针因为派生类的析构函数未被调用，该指针指向的空间不会被释放，内存泄漏
//	{
//		delete[] _ptr;
//		cout << "~Student()" << endl;
//	}
//private:
//	int* _ptr = new int[10];
//};
//
//int main()
//{
//	//基类类型的指针，既可以指向基类对象也可以指向派生类对象，对派生类而言是因为有切片切割的概念存在
//	Person* p1 = new Person;
//	Person* p2 = new Student;
//
//	delete p1;
//	delete p2;
//
//	return 0;
//}
//


//派生类的虚函数可以不加virtual
#include <iostream>
using namespace std;
class A {};
class B : public A {};

class Person {
public:
	virtual A* BuyTicket()
	{
		cout << "买票-全价" << endl;
		return nullptr;
	}

	virtual ~Person()
	{
		cout << "~Person()" << endl;
	}
};

class Student : public Person
{
public:
	virtual B* BuyTicket()
	{
		cout << "买票-半价" << endl;
		return nullptr;
	}

	 ~Student() //派生类的成员指针因为派生类的析构函数未被调用，该指针指向的空间不会被释放，内存泄漏
	{
		delete[] _ptr;
		cout << "~Student()" << endl;
	}
private:
	int* _ptr = new int[10];
};

int main()
{
	//基类类型的指针，既可以指向基类对象也可以指向派生类对象，对派生类而言是因为有切片切割的概念存在
	Person* p1 = new Person;
	Person* p2 = new Student;

	delete p1;
	delete p2;

	return 0;
}

