// Lab04-01_201969990051.cpp : This file contains the 'main' function. Program execution begins and ends there.
//201969990051-Yeo King

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
	bool append(const Elem& item);
	bool insert(const Elem& item);
	bool delet(Elem& it, int count, int t);
	bool setPos(int pos);
	void init() {
		fence = tail = head = new Link<Elem>;
		leftcnt = rightcnt = 0;
	}
};



template <class Elem>
bool LList<Elem>::delet(Elem& it, int count, int t) {
	if (fence->next == NULL)
		return false;
	for (int i = 0; i < t; i++) {
		if (i == (t - 1)) {
			fence = head;
			it = fence->next->element;
			cout << it;

			break;
		}

	
		for (int i = 0; i < count; i++) {
			if (fence == tail)
				fence = head->next;
			else if (fence->next == NULL )
				fence = head;
		
			else if (fence->next == tail) 
				fence = head;
			else
			fence = fence->next;
		
		}

		it = fence->next->element; 
		Link<Elem>* ltemp = fence->next; 
		fence->next = ltemp->next; 
		if (tail == ltemp) 
			tail = fence;
		delete ltemp; 
	
		cout << it << " ";
	}
	
}


template  <class  Elem>
bool LList<Elem>::append(const Elem& item) {
	tail = tail->next = new  Link<Elem>(item, NULL);
	rightcnt++;
	return  true;
}



template  <class  Elem> bool LList<Elem>::insert(const Elem& item) {
	fence->next = new  Link<Elem>(item, fence->next);
	if (tail == fence)
		tail = fence->next;
	rightcnt++;
	return  true;
};




int main()
{
	int n, t;
	int el;
	LList<int> list;
	list.init();
	cout << "Input:\n";
	cin >> n >> t;
	n = n - 1;
	cout << "Output:\n";
	for (int i = 1; i <= t; i++)
	{
		if (i == 1)
			list.insert(i);
		else
			list.append(i);
	}
	list.delet(el, n, t);

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
