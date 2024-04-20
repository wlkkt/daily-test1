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
//	 ~Student() //派生类的成员指针因为派生类的析构函数未被调用，该指针指向的空间不会被释放，内存泄漏
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


//设计一个不能被继承的类：C++98
//#include <iostream>
//using namespace std;
//
//class Car
//{
//public:
//private:
//    Car()//父类的构造函数
//    {}
//};
//
//class Benz : public Car
//{
//public:
//
//};
//
//int main()
//{
//    Benz b;
//    return 0;
//}


////设计一个不能被继承的类：C++11
//#include <iostream>
//using namespace std;
//
//class Car final
//{
//public:
//
//private:
//    Car()//父类的构造函数
//    {}
//};
//
//class Benz : public Car
//{
//public:
//
//};
//
//int main()
//{
//    Benz b;
//    return 0;
//}

////////////////////////////////////虚函数表指针与虚函数表
//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//    virtual void Func1()
//    {
//        cout << "Func1()" << endl;
//    }
//
//    virtual void Func2()
//    {
//        cout << "Func1()" << endl;
//    }
//
//    virtual void Func3()
//    {
//        cout << "Func1()" << endl;
//    }
//
//private:
//    int _b = 1;
//};
//
//class Child : public Base
//{
//public:
//    virtual void Func1()
//    {
//        cout << "Func1()" << endl;
//    }
//
//private:
//    int _c = 1;
//};
//
//
//int main()
//{
//    Base b;
//    Child c;
//    return 0;
//}

//////////////////////////////多态的原理
//#include <iostream>
//using namespace std;
//
//class Person 
//{
//public:
//	virtual void BuyTicket() { cout << "买票-全价" << endl; }
//private:
//	int _a = 1;
//};
//
//class Student : public Person 
//{
//public:
//	virtual void BuyTicket() { cout << "买票-半价" << endl; }
//private:
//	int _b = 2;
//};
//
//void Func(Person& p)
//{
//	p.BuyTicket();
//}
//
//int main()
//{
//	Person Mike;
//	Func(Mike);
//
//	Student Johnson;
//	Func(Johnson);
//
//	return 0;
//}

///////////////不满足多态 和 满足多态下的汇编指令
//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	 void BuyTicket() { cout << "买票-全价" << endl; }
//private:
//	int _a = 1;
//};
//
//class Student : public Person
//{
//public:
//	 void BuyTicket() { cout << "买票-半价" << endl; }
//private:
//	int _b = 2;
//};
//
//void Func(Person& p)
//{
//	p.BuyTicket();
//}
//
//int main()
//{
//	Person Mike;
//	Func(Mike);
//
//	Student Johnson;
//	Func(Johnson);
//
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	 virtual void BuyTicket() { cout << "买票-全价" << endl; }
//private:
//	int _a = 1;
//};
//
//class Student : public Person
//{
//public:
//	virtual void BuyTicket() { cout << "买票-半价" << endl; }
//private:
//	int _b = 2;
//};
//
//void Func(Person* p)
//{
//	p->BuyTicket();
//}
//
//int main()
//{
//	Person Mike;
//	Func(&Mike);
//
//	Student Johnson;
//	Func(&Johnson);
//
//	return 0;
//}


///////////////////////////////验证基类的虚表直接存放在它的空间中，派生类的虚表存放在它所继承的基类的空间中
//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//     void Func1()
//    {
//        cout << "Func1()" << endl;
//    }
//
//     virtual void Func2()
//    {
//        cout << "Func1()" << endl;
//    }
//
//     void Func3()
//    {
//        cout << "Func1()" << endl;
//    }
//
//private:
//    int _b = 1;
//};
//
//class Child : public Base
//{
//public:
//    int d = 32;
//
//     virtual void Func2()
//     {
//         cout << "Func1()" << endl;
//     }
//
//private:
//    int _c = 1;
//};
//
//
//int main()
//{
//    Base b;
//    Child c;
//    return 0;
//}



#include <iostream>
using namespace std;

class Base
{
public:
    virtual void Func1()
    {
        cout << "Func1()" << endl;
    }

    virtual void Func2()
    {
        cout << "Func1()" << endl;
    }

    virtual void Func3()
    {
        cout << "Func1()" << endl;
    }

private:
    int _b = 1;
};

class Child : public Base
{
public:
    virtual void Func1()
    {
        cout << "Func1()" << endl;
    }

   void Func3()
    {
        cout << "Func1()" << endl;
    }
private:
    int _c = 1;
};


int main()
{
    Base b;
    Child c;
    return 0;
}
