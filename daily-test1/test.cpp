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
///////////////////////////////////////////多态：买票
//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	virtual void BuyTicket() { cout << "Person->买票->全价" << endl; }
//};
//
//class Student : public Person
//{
//public:
//	virtual void BuyTicket() { cout << "Student->买票->半价" << endl; }
//};
//
////void Func(Person* p)
//void Func(Person& p)
//{
//	p.BuyTicket();
//}
//
//int main()
//{
//	Person ps;
//	Student stu;
//
//	Func(ps);
//	Func(stu);
//	return 0;
//}