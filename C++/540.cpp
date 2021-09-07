// 540.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Invoice {
private:
	string number, description;
	int count, price;

public:
	

	Invoice(string x, string y, int z, int j) {
		 number = x;
		 description = y;
		 count = z;
		 price = j;

		if (count < 0) {
			cout << "quantity cannot be negative. quantity set to 0." << endl;
			count = 0;
		}
		if (price < 0) {
			cout << "pricePerItem cannot be negative. pricePerItem set to 0." << endl;
			price = 0;
		}


	}

	string getPartNumber() {
		return number ;
	}
	string getPartDescription() {
		return description;
	}
	int getQuantity() {
		
		return count;
	}
	int getPricePerItem() {
		return price;
	}
	int getInvoiceAmount() {
		return (count * price);
	}
	
	void setPartNumber(string x) {
		number = x;
	}
	void setPartDescription(string y) {
		description = y;
	}
	void setQuantity(int z) {
		if (z < 0) {
			cout << "quantity cannot be negative. quantity set to 0." << endl;
			count = 0;
		}
		else {
			count = z;
		}
	}
	void setPricePerItem(int j) {
		if (j < 0) {
			cout << "pricePerItem cannot be negative. pricePerItem set to 0." << endl;
			price = 0;
		}
		else {
			price = j;
		}
	}
};









int main()
{
	string number;
	string description;
	int count;
	int price;
	cin >> number >> description >> count >> price;
	Invoice invoice(number, description, count, price);

	// display the invoice data members and calculate the amount
	cout << "Part number: " << invoice.getPartNumber() << endl;
	cout << "Part description: " << invoice.getPartDescription() << endl;
	cout << "Quantity: " << invoice.getQuantity() << endl;
	cout << "Price per item: $" << invoice.getPricePerItem() << endl;
	cout << "Invoice amount: $" << invoice.getInvoiceAmount() << endl;

	cin >> number >> description >> count >> price;
	invoice.setPartNumber(number);
	invoice.setPartDescription(description);
	invoice.setQuantity(count); // negative quantity, so quantity set to 0 
	invoice.setPricePerItem(price);

	// display the modified invoice data members and calculate new amount
	cout << "Part number: " << invoice.getPartNumber() << endl;
	cout << "Part description: " << invoice.getPartDescription() << endl;
	cout << "Quantity: " << invoice.getQuantity() << endl;
	cout << "Price per item: $" << invoice.getPricePerItem() << endl;
	cout << "Invoice amount: $" << invoice.getInvoiceAmount() << endl;
} // end main