#pragma once
#include<iostream>
using namespace std;
#define AX 1.6
#undef AX

//https://www.cnblogs.com/xudong-bupt/p/3509567.html
//������ʹ��const
class game {
private:
	static int static_int;//����game�๲��ĳ�Ա������һ���ı䣬ȫ������
							//�˴������������ֵ����
	static const int static_const_int=1;//һ�����壬�޷��޸�
public:
	void print() {
		static_int++;
		cout << static_int << " " << static_const_int << endl;
	}
};


char greeting[] = "hello";
char* p1 = greeting;
const char* p2 = greeting;//��ʾ��ָ��Ϊ����
//char const *p2;���������ͬ
char* const p3 = greeting;//��ʾָ�뱾��Ϊ����
const char* const p4 = greeting;//���߶��ǳ���




enum day {
	//ö�٣����Ÿ���������Sat�������û�ж���
	//����
	Sun=3, Mon, Tue, Wed, Thu, Fri, Sat,
}work;