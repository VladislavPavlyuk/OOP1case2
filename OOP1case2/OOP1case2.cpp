// OOP2case2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class ClassName
{
public:
	ClassName()
	{
		cout << "ClassName!!!\n";
	}
	ClassName(ClassName& obj) {
		cout << "Copy ClassName!!!\n";
	}
	~ClassName()
	{
		cout << "~ClassName!!!\n";
	}
};
void f(ClassName o) {
	cout << "Function f!!!\n";
}
ClassName r() {
	ClassName o;
	cout << "Function r!!!\n";
	return o;
}
void main()
{
						//������������� ������ ������� ������
	ClassName c1;
	ClassName c2 = c1;
						//�������� ������� � �������
	ClassName a;
	f(a);
						//������� ������� �� �������
	r();
}