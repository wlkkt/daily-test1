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
///////////////////////////////////////////��̬����Ʊ
//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	virtual void BuyTicket() { cout << "Person->��Ʊ->ȫ��" << endl; }
//};
//
//class Student : public Person
//{
//public:
//	virtual void BuyTicket() { cout << "Student->��Ʊ->���" << endl; }
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