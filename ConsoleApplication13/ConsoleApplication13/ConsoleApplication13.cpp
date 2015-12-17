// ConsoleApplication13.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include <iterator>
#include <algorithm>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	stack<double> stack1;
	stack<double> stack2;
	vector<double> vector1;
	queue<double>	queue1;
	queue<double>	queue2;
	vector<double> vector2;
	vector<double> vector3;
	
	stack1.push(1.5);
	stack1.push(2.8);
	stack1.push(3.7);
	stack1.push(9.9);

	vector1.push_back(stack1.top());//вставка в конец контейнера 
	stack1.pop();
	int m = 0;
	int k = 0;
	int p = 0;
	int size_of_stack = stack1.size() + 1;

	for (int i = 1; i < size_of_stack; i++)
	{
		for (int j = 0; j < vector1.size(); j++)
		{
			if (vector1[j] < stack1.top()) { k++; }
		}
		if (k == 0)
		{
			vector1.push_back(stack1.top());
			stack1.pop();
		}
		else
		{
			vector<double>::iterator it = vector1.begin(); //итератор связывается с первым эл контейнера
			it += k;
			vector1.insert(it, stack1.top());
			stack1.pop();
			k = 0;
			it = vector1.begin();
			//sort(vector1.begin(), vector1.end(), greater<int>()); 
		}
	}
	cout << "Первый контейнер по убыванию" << endl << endl;

	for (int i = 0; i < vector1.size(); i++)
	{

		cout << vector1[i] << endl;
	}
	for (int i = 0; i < vector1.size(); i++)
	{
		stack1.push(vector1[i]);
	}
	stack2 = stack1;
	int w = 0;
	cout << "Первый контейнер по возрастания" << endl << endl;

	for (int i = 0; i < vector1.size(); i++)
	{
		sort(vector1.begin(), vector1.end(), less<int>());
		cout << vector1[i] << endl;
		

	}

	size_of_stack = stack2.size();

	stack<double> stack3 = stack2;
	for (int i = 0; i < size_of_stack; i++)
	{
		if (stack2.top() > 3.7)
		{
			queue1.push(stack2.top());
		}
		sort(vector1.begin(), vector1.end());
		stack2.pop();

	}

	queue2 = queue1;

	int size_of_queue = queue2.size();

	cout << "Второй контейнер" << endl << endl;

	for (int i = 0; i <size_of_queue; i++)
	{
		vector3.push_back(queue2.front());
		queue2.pop();
		sort(vector3.begin(), vector3.end(), less<int>());
		for (int i = 0; i < vector3.size(); i++)
		{
			cout << vector3[i] << endl;

		}
	}
	cout << endl;

	cout << "Третий контейнер" << endl << endl;

	while (!stack3.empty())
	{
		vector2.push_back(stack3.top());
		stack3.pop();
	}

	while (!queue1.empty())
	{
		vector2.push_back(queue1.front());
		queue1.pop();
	}

	for (int i = 0; i < vector2.size(); i++)
	{

		sort(vector2.begin(), vector2.end(), less<int>());
		cout << vector2[i] << endl;
		if (vector2[i]>3.7)
		{
			m++;
		}
		if (vector2[i] >= 3.7)
		{
			p++;
		}


	}
	if (m >= 1 )
	{
		cout << "Count=" << m << endl;
		
	}

	if (p>1)
	{
		cout << "Значения, заданные для поиска есть" << endl;
	}

}
