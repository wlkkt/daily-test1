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
#include <iostream>
using namespace std;
class A {};
class B : public A {};

class Person {
public:
	virtual A* BuyTicket()
	{
		cout << "��Ʊ-ȫ��" << endl;
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
		cout << "��Ʊ-���" << endl;
		return nullptr;
	}

	 ~Student() //������ĳ�Աָ����Ϊ���������������δ�����ã���ָ��ָ��Ŀռ䲻�ᱻ�ͷţ��ڴ�й©
	{
		delete[] _ptr;
		cout << "~Student()" << endl;
	}
private:
	int* _ptr = new int[10];
};

int main()
{
	//�������͵�ָ�룬�ȿ���ָ��������Ҳ����ָ����������󣬶��������������Ϊ����Ƭ�и�ĸ������
	Person* p1 = new Person;
	Person* p2 = new Student;

	delete p1;
	delete p2;

	return 0;
}

