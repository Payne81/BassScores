#pragma once
#include<iostream>
using namespace std;


//��̬�־�̬��̬�Ͷ�̬��̬

//��̬��̬��ͨ���麯��ʵ��
class A {
public:
	int i;
	//����Ĭ�Ϲ��캯����i��ֵ
	A():i(10){}

	//������virtual����ʵ�ֶ�̬
	//��virtual����ָ������麯����
	virtual  void f() { cout << "A::f()" << i << endl; }

};
class B : public A {
public:
	B() : j(20) {}
	virtual void f() { cout << "B::f()" << j << endl; }

	int j;
};
int test1()
{
	A a;
	B b;
	//ͨ��ָ�����ò��Ƕ�̬��
	A *p = &b;//ִ�н��ΪB::f()20
	a = b;
	a.f();//ִ�н��ΪA::f()10
	p->f();
	return 0;
}

//��̬��̬
/*
��̬��̬�����˼�룺������صĶ������ͣ�ֱ��ʵ�����Ǹ��ԵĶ��壬����Ҫ���л��࣬��������û���κι�ϵ��
ֻ��Ҫ�����������ʵ����Ҫ����ͬ�Ľӿ�����������Ľӿڳ�֮Ϊ��ʽ�ӿڡ��ͻ��˰Ѳ�����Щ����ĺ�������Ϊ
ģ�壬����Ҫ����ʲô���͵Ķ���ʱ��ֱ�Ӷ�ģ��ָ��������ʵ�μ��ɣ���ͨ��ʵ�������ã����������������
���У�����ʽ�ӿں������ڶ�̬���麯����ʵ�ֶ�̬��̬����ģ���̼����ͱ���У�������ʽ�ӿںͱ�������̬��
ʵ�־�̬��̬
*/
class Line
{
public:
	void Draw()const { std::cout << "Line Draw()\n"; }
};

class Circle
{
public:
	void Draw(const char* name = NULL)const { std::cout << "Circle Draw()\n"; }
};

class Rectangle
{
public:
	void Draw(int i = 0)const { std::cout << "Rectangle Draw()\n"; }
};

template<typename T>
void DrawT(T g) {
	g.Draw();
}

void test2(){
	Line a;
	Circle b;
	Rectangle c;
	DrawT(a);
	DrawT(b);
	DrawT(c);
}