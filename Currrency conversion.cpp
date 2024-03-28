//Currency conversion
#include <iostream>

using namespace std;

int main() 
{
	int optn = 0;
	double amount;
		cout << "\nWhich coversion of currency do you want: \n 1.USD to GBP \n 2.GBP to USD\n 3.USD to NTD \n 4. NTD to USD";
		cin >> optn; 
		switch (optn)
		{
			case 1 :
				cout << "\nYou choose USD to GBP!!!!!\n";
				cout << "Enter the amount of UK Pounds: ";
				cin >> amount;
				cout << "Here is how much USD: $" << 1.268*amount;
				break;
			case 2 :
				cout << "\nYou choose GBP to USD!!!!!\n";
				cout << "Enter the amount of US Dollars :";
				cin >> amount;
				cout << "Here is how much GBP: " << 0.788*amount;
				break;
			case 3 :
				cout << "\nYou choose USD to NTD!!!!!\n";
				cout << "Enter the amount of US Dollars :";
				cin >> amount;
				cout << "Here is how much NTD: " << amount*31.48;
				break;
			case 4 :
				cout << "\nYou choose NTD to USD!!!!!\n";
				cout << "Enter the amount of NT Dollars :";
				cin >> amount;
				cout << "Here is how much USD: " << amount*0.032;
				break;
		}
	return 0;
}