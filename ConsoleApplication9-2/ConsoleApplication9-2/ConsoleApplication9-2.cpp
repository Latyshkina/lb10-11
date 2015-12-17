// ConsoleApplication9-2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<queue>

using namespace std;

class Set
{

public:
	int aray[10];
	int num = 0;

	Set()
	{

	}

	Set(int x, int y, int z)
	{
		aray[0] = x;
		aray[1] = y;
		aray[2] = z;
		num = 3;
	}

	~Set()
	{

	}

	friend void operator >> (istream& input, Set& x) //ввод
	{
		for (int i = 0; i < 7; i++)
		{
			input >> x.aray[i];
		}
		x.num = 7;
	}

	friend ostream& operator << (ostream& output, Set& x) //вывод
	{
		for (int i = 0; i < x.num; i++)
		{
			output << x.aray[i] << " ";
		}
		return output;
	}

	friend Set operator * (Set& x, Set& y) //пересечение множеств 
	{
		Set h;

		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (x.aray[i] == y.aray[j])
				{
					h.aray[h.num] = x.aray[i];
					h.num++;
				}
			}
		}
		return h;
	}

	friend Set operator + (Set& x, int k) //добавить элемент
	{
		if (x.num < 10)
		{
			x.aray[x.num++] = k;
		}
		return x;
	}

	friend Set operator - (Set& x, int u)// удалить элемент 
	{
		for (int i = 0; i<x.num; i++)
		{
			for (int j = i + 1; j<x.num; j++)
			{
				if (x.aray[j] == u)
				{
					x.aray[j] = x.aray[x.num - 1];
					x.num--;
				}
			}
		}
		return x;
	}
	
};


void main()
{
	setlocale(LC_ALL, "Rus");
	queue<Set> queue1;
	queue<Set> queue2;
	queue<Set> queue3;
	queue<Set> queue4;
	queue<Set> queue5;
	queue<Set> queue6;
	queue<Set> queue7;
	queue<Set> queue8;

	Set a(8, 9, 10);
	Set b(11, 12, 13);
	Set c(20, 21, 23);
	Set r(24, 25, 26);
	Set t(28, 29, 30);
	Set u(34, 35, 36);

	queue1.push(a); //заносим элемент 
	queue1.push(b);
	queue1.push(c);

	queue5.push(t);//заносим во второй контейнер
	queue5.push(u);

	queue3=queue2 =queue7= queue1;
	queue6 = queue5;
	int size_of_queue = queue1.size();
	int size_of_queue5 = queue5.size();

	cout << "Контейнер" << endl;

	for (int i = 0; i < size_of_queue; i++)
	{
		cout << queue1.front() << endl;//записываем первый элемент
		queue1.pop(); //удаляем элемент 
	}

	queue2.pop();
	queue2.front();
	queue2.pop();
	queue2.push(r);
	queue8 = queue3;
	cout << "Контейнер, после удаления и вставки " << endl;
	
	for (int i = 0; i < size_of_queue - 1; i++)
	{
		cout << queue2.front() << endl;
		queue2.pop();
		
		
	}
	cout << endl;
	
	cout << "Контейнер, после удаления заданного колличества " << endl;
	
	for (int i = 0; i < 2; i++)
	{
		cout << queue3.front() << endl;
		queue3.pop();

	}
	cout << endl;
	//queue8 = queue3;
	cout << "Второй контейнер " << endl;

	for (int i = 0; i < size_of_queue5; i++)
	{
		cout << queue5.front() << endl;//записываем первый элемент
		queue5.pop(); //удаляем элемент 
	}
	cout << endl;

	for (int i = 0; i < size_of_queue-1; i++)
	{
		queue8.push(queue6.front()); //записываем первый элемент
		queue6.pop(); //удаляем элемент 
	}

	cout << "Контейнер в контейнере " << endl;

	for (int i = 0; i < size_of_queue+2; i++)
	{
		cout << queue8.front() << endl;//записываем первый элемент
		queue8.pop(); //удаляем элемент 
	}
	cout << endl;
	
	//queue3.pop();
	//for (int i = 0; i < size_of_queue - 1; i++)
	//{
	//	queue3.push(queue2.front());
	//	queue2.pop();

	//}
	//for (int i = 0; i < size_of_queue; i++)
	//{
	//	cout << queue3.front() << endl;//записываем первый элемент
	//	queue3.pop(); //удаляем элемент 
	//}

}