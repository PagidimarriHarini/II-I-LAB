#include <iostream>
using namespace std;
int main() {
	int a,b,ch;
	cout << "Enter two numbers:";
	cin >> a;
	cin >> b;
	cout << "Enter your choice: ";
	cin >> ch;

	switch(ch) {
			case 1:
				cout << "Addition of the two numbers is: " << a + b << endl;
				break;
			case 2:
				cout << "Substraction of two numbers is: " << a-b << endl;
				break;
			case 3:
				cout << "Multiplication of two numbers is: " << a * b << endl;
				break;
			case 4:
				cout << "Division of two numbers is: " << a/(float)b << endl;
				break;
			case 5:
				cout << "Modulus of two numbers is: " << a%b << endl;
				break;
			default: 
				cout << "Enter correct choice from 1 to 5: ";
				cin >> ch;
		}
		while(ch < 6);
	}
	return 0;
}
