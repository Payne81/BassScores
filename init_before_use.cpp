#include<iostream>
using namespace std;

class test {
public:
	test();
	int a;
	int b;
	int c;
	int d;
};

//�˴�ʹ�ó�ֵ�к͸�ֵ�ٶ���ͬ
test::test() :a(1),b(a),c(3),d(4)
{}

class test1 {
public:
	test1();
	int a;
	int b;
	int c;
	int d;
};

//��Ա�������ǰ�����˳���ʼ����a��ʼ��ʱb��δ��ʼ��
test1::test1():b(2),a(b), c(3), d(4)
{}

class test2 {
public:
	test2(const int z);
	int a;
	int b;
	int c;
	int d;
};

//���ƶ���Ҫ�ȸ����ٶȿ�
test2::test2(const int z): b(z), a(z), c(z), d(z)
{}

int main() {
	test sample;
	test1 sample1;
	test2 sample2(2);
	//���1134
	cout << sample.a << " " << sample.b << " " << sample.c << " " << sample.d << "\n";
	//a��ȡ�����bit
	cout << sample1.a << " " << sample1.b << " " << sample1.c << " " << sample1.d << "\n";
	//��ͺܿ��ˣ���Ȼ�����ǿ����������Լ�����
	cout << sample2.a << " " << sample2.b << " " << sample2.c << " " << sample2.d << "\n";
	system("pause");
	return 0;
}