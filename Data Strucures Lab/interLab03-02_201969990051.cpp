// Lab03-02_201969990051.cpp : This file contains the 'main' function. Program execution begins and ends there.
//201969990051 - Yeo King
#include <iostream>
using namespace std;

template <class T>
class Stack
{
public:
	Stack(int = 10);
	~Stack() { delete[] stackPtr; }
	int push(const T&);
	int pop(T&);  
	int isEmpty()const { return top == -1; }
	int isFull() const { return top == size - 1; }
private:
	int size;  
	int top;
	T* stackPtr;
};

template <class T>
Stack<T>::Stack(int s)
{
	size = s > 0 && s < 1000 ? s : 10;
	top = -1;  
	stackPtr = new T[size];
}

template <class T>
int Stack<T>::push(const T& item)
{
	if (!isFull())
	{
		stackPtr[++top] = item;
		return 1;  
	}
	return 0; 
}


template <class T>
int Stack<T>::pop(T& popValue)
{
	if (!isEmpty())
	{
		popValue = stackPtr[top--];
		return 1;  
	}
	return 0;  
}


void main()
{

	typedef Stack<int> IntStack;

	IntStack Is(5);
	int i = 1;
	cout << "Pushing elements onto Is" << endl;
	while (Is.push(i))
	{
		cout << i << ' ';
		i += 1;
	}
	
	cout << endl << "Popping elements from Is" << endl;
	while (Is.pop(i))
	cout << i << ' ';
	cout << endl << "Stack is empty" << endl;
	cout << endl;

	
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
