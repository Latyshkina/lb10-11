// ConsoleApplication9.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <stack>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	stack<double> stack1_1;
	stack<double> stack1_2;
	stack<double> stack1_3;
	stack<double> stack1_4;
	stack<double> stack2;
	//����� ���������
	stack1_1.push(5.5);
	stack1_1.push(7.7);
	stack1_1.push(1.9);
	stack1_1.push(8.4);
	//������ ���������
	stack2.push(8.9);
	stack2.push(0.31);
	stack2.push(19.7);
	stack2.push(8.5);//����������

	stack1_2 = stack1_1 ;
	stack1_3 = stack1_2 = stack1_1;

	int sizeOfStack = stack1_1.size();

	cout << "��������� ���������" << endl << endl;

	for (int i = 0; i <sizeOfStack; i++)
	{
		cout << stack1_1.top() << endl;//��������� � �������� �� ������� �����
		stack1_1.pop(); 
	}

	cout << endl << endl;
	 
	stack1_2.pop();//������� ������� �� ������� ����������
	stack1_2.pop();

	stack1_2.push(8.99);//�������� ������
	stack1_2.push(2.05);

	cout << " ���������, ����� ������� �������� � �������� ������� " << endl;

	for (int i = 0; i <sizeOfStack; i++)
	{
		cout << stack1_2.top() << endl;
		stack1_2.pop();
	}
	cout << endl << endl;
	stack1_3.pop();
	stack1_4.push(2.05);
	stack1_4.push(8.99);
	stack1_4.push(5.5);
	stack1_4.push(7.7);
	cout << "���������, ����� ������� ������� ����� ��������� " << endl;

		for (int i = 0; i < 2; i++)
		{
			
			cout << stack1_4.top() << endl;//��������� � �������� �� ������� �����
			stack1_4.pop();
		}
	cout << endl << endl;

	cout << "2 ���������, ����� �������� ������� " << endl;

	for (int i = 0; i < sizeOfStack - 1; i++)
	{
		stack2.push(stack1_3.top()); //������� ����� ������� � ����
		stack1_3.pop();

	}

	sizeOfStack = stack2.size();
	for (int i = 0; i <sizeOfStack; i++)
	{
		cout << stack2.top() << endl;
		stack2.pop();
	}



}