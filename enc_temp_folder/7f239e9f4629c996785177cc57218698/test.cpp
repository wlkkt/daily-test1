///////////////////////////////////////////�̳������
////���
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
////�̳�
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
///////////////////////////////////////////��̬������������д

////��ͨ����:�Ƿ����麯��������ν
//#include <iostream>
//using namespace std;
//class A {};
//class B : public A {};
//
//class Person {
//public:
//	virtual A* BuyTicket() 
//	{
//		cout << "��Ʊ-ȫ��" << endl;
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
//		cout << "��Ʊ-���" << endl;
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


////���ⳡ��������
//#include <iostream>
//using namespace std;
//class A {};
//class B : public A {};
//
//class Person {
//public:
//	virtual A* BuyTicket()
//	{
//		cout << "��Ʊ-ȫ��" << endl;
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
//		cout << "��Ʊ-���" << endl;
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
//	//�������͵�ָ�룬�ȿ���ָ��������Ҳ����ָ����������󣬶��������������Ϊ����Ƭ�и�ĸ������
//	Person* p1 = new Person;
//	Person* p2 = new Student;
//
//	delete p1;
//	delete p2;
//
//	return 0;
//}


//���ⳡ��������1
//#include <iostream>
//using namespace std;
//class A {};
//class B : public A {};
//
//class Person {
//public:
//	virtual A* BuyTicket()
//	{
//		cout << "��Ʊ-ȫ��" << endl;
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
//		cout << "��Ʊ-���" << endl;
//		return nullptr;
//	}
//
//	virtual ~Student() //������ĳ�Աָ����Ϊ���������������δ�����ã���ָ��ָ��Ŀռ䲻�ᱻ�ͷţ��ڴ�й©
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
//	//�������͵�ָ�룬�ȿ���ָ��������Ҳ����ָ����������󣬶��������������Ϊ����Ƭ�и�ĸ������
//	Person* p1 = new Person;
//	Person* p2 = new Student;
//
//	delete p1;
//	delete p2;
//
//	return 0;
//}
//


//��������麯�����Բ���virtual
//#include <iostream>
//using namespace std;
//class A {};
//class B : public A {};
//
//class Person {
//public:
//	virtual A* BuyTicket()
//	{
//		cout << "��Ʊ-ȫ��" << endl;
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
//		cout << "��Ʊ-���" << endl;
//		return nullptr;
//	}
//
//	 ~Student() //������ĳ�Աָ����Ϊ���������������δ�����ã���ָ��ָ��Ŀռ䲻�ᱻ�ͷţ��ڴ�й©
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
//	//�������͵�ָ�룬�ȿ���ָ��������Ҳ����ָ����������󣬶��������������Ϊ����Ƭ�и�ĸ������
//	Person* p1 = new Person;
//	Person* p2 = new Student;
//
//	delete p1;
//	delete p2;
//
//	return 0;
//}


//���һ�����ܱ��̳е��ࣺC++98
//#include <iostream>
//using namespace std;
//
//class Car
//{
//public:
//private:
//    Car()//����Ĺ��캯��
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


////���һ�����ܱ��̳е��ࣺC++11
//#include <iostream>
//using namespace std;
//
//class Car final
//{
//public:
//
//private:
//    Car()//����Ĺ��캯��
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

////////////////////////////////////�麯����ָ�����麯����
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

//////////////////////////////��̬��ԭ��
//#include <iostream>
//using namespace std;
//
//class Person 
//{
//public:
//	virtual void BuyTicket() { cout << "��Ʊ-ȫ��" << endl; }
//private:
//	int _a = 1;
//};
//
//class Student : public Person 
//{
//public:
//	virtual void BuyTicket() { cout << "��Ʊ-���" << endl; }
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

///////////////�������̬ �� �����̬�µĻ��ָ��
//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	 void BuyTicket() { cout << "��Ʊ-ȫ��" << endl; }
//private:
//	int _a = 1;
//};
//
//class Student : public Person
//{
//public:
//	 void BuyTicket() { cout << "��Ʊ-���" << endl; }
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
//	 virtual void BuyTicket() { cout << "��Ʊ-ȫ��" << endl; }
//private:
//	int _a = 1;
//};
//
//class Student : public Person
//{
//public:
//	virtual void BuyTicket() { cout << "��Ʊ-���" << endl; }
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


///////////////////////////////��֤��������ֱ�Ӵ�������Ŀռ��У��������������������̳еĻ���Ŀռ���
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
