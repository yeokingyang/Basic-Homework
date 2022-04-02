// Lab04-01_201969990051.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	bool append(const Elem& item);
	void print()const;
	void printr();
	bool remove(const int n);

	void init() { 
		fence = tail = head = new Link<Elem>;
		leftcnt = rightcnt = 0;
	}


};


template <class Elem> bool LList<Elem>::remove(const int n) {
	if (fence->next == NULL)
		return false;

	Link<Elem>* fence = head;

	while (fence != tail) {
		if (fence->next->element == n) {
			Link<Elem>* ltemp = fence->next; 
			fence->next = ltemp->next; 
			if (tail == ltemp)
				tail = fence;
			delete ltemp; 
			rightcnt--;
			
			}
		if (fence->next->element != n) {
			
			fence = fence->next; 
		
		}

		if (fence->next == tail && tail->element == n) {

			Link<Elem>* ltemp = fence->next; 
			fence->next = ltemp->next; 
			tail=fence;
			delete ltemp; 
			rightcnt--;
		
		
		}
	}

	return true;
}




template  <class  Elem>
bool LList<Elem>::append(const Elem& item) {
	tail = tail->next = new  Link<Elem>(item, NULL);
	rightcnt++;
	return  true;
}

template  <class  Elem>
void LList<Elem>::print() const {
	
	Link<Elem>* temp = head;
	if (temp->next == NULL)
		cout << "NULL\n";
	else {
		
		while (temp->next != NULL) {
			cout << temp->next->element << " ";
			temp = temp->next;
		}
		cout << " \n";
	}
};


template  <class  Elem>
void LList<Elem>::printr()  {

	Link<Elem>* fence = tail;
	Link<Elem>* temp = head;
	leftcnt = leftcnt + rightcnt;
	rightcnt=0;
	if (temp->next == NULL)
		cout << "NULL\n";
	else {

		cout << fence->element << " ";

		while (leftcnt != 1) {
			Link<Elem>* temp = head;
			while (temp->next != fence)
				temp = temp->next;
			fence = temp;
			cout << fence->element << " ";
			leftcnt--;

		}
		cout << "\n";
	}

};



int main()
{

	int pos=0;
	int tot, num, tota;
	int del;
	int it;
	string inp;
	LList<int> list;
	list.init();
	std::cout << "Input \n";
	const int f = 1000;

		while (inp != "END") {

			std::cin >> inp;
			if (inp == "insert") {
				std::cin>>tota;
				for (int s = 0; s < tota; s++) {
					std::cin >> num;
					list.append(num);
					
				}
			}

			if (inp == "show") {
					list.print();	
				
			}

		
			if (inp == "rshow") {
				list.printr();
			

			}
			if (inp == "delete") {
				std::cin >> del;
				list.remove(del);
		
			}	
		} 
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
