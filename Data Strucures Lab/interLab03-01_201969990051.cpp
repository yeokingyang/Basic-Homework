// Lab03-01_201969990051.cpp : This file contains the 'main' function. Program execution begins and ends there.
//201969990051 - Yeo King
#include <iostream>
using namespace std;


template  <class  Elem>  class Link {
public:Elem  element; 
	  Link* next; 
	  Link(const Elem& elemval, Link* nextval = NULL) {
		  element = elemval;
		  next = nextval;
	  }
	  Link(Link* nextval = NULL) {
		  next = nextval;
	  }
};

template  <class  Elem> class LList : public Link<Elem> {
private:
	Link<Elem>* head; 
	Link<Elem>* tail;
	Link<Elem>* fence; 
	int leftcnt;
	int rightcnt; 

public:

	bool insert(const Elem& item);
	void print()const;
	bool remove(Elem& it);
	bool setPos(int pos);
	void init() {
		fence = tail = head = new Link<Elem>;
		leftcnt = rightcnt = 0;
	}

	
};

template  <class  Elem>bool LList<Elem>::setPos(int pos) {
	if ((pos < 0) || (pos > rightcnt + leftcnt))
		return  false;
	fence = head;
	for (int i = 0; i < pos; i++)
		fence = fence->next;
	rightcnt = rightcnt + leftcnt - pos;
	leftcnt = pos;
	return  true;
}


	template  <class  Elem> bool LList<Elem>::insert(const Elem& item) {
		fence->next = new  Link<Elem>(item, fence->next);
		if (tail == fence)
			tail = fence->next;
		rightcnt++;
		return  true;
	};


	template <class Elem> bool LList<Elem>::remove(Elem& it) {
		if (fence->next == NULL)
			return false;
		it = fence->next->element; 
		Link<Elem>* ltemp = fence->next; 
		fence->next = ltemp->next; 
		if (tail == ltemp)
			tail = fence;
		delete ltemp; 
		rightcnt--;
		return true;
	}

	template  <class  Elem>
	void LList<Elem>::print() const {
		Link<Elem>* temp = head;
		cout << " < ";
		while (temp->next != NULL) {
			cout << temp->next->element << " ";
			temp = temp->next;
		}
		cout << " > \n";
	};

int main()
{
	int n;
	LList<int> list;
	list.init();
	cout << "Insert function :" << endl;
	cout << "Insert 25 " << endl;
	list.insert(25);
	cout << "Insert 35 " << endl;
	list.insert(35);
	cout << "Print function : " << endl;
	list.print();
	cout << "Setpos to 1 " << endl;
	list.setPos(1);
	cout << "Print function : " << endl;
	list.print();
	cout << "Remove Function : " << endl;
	list.remove(n);
	list.print();

	
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

