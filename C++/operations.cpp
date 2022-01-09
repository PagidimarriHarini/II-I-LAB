#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Enter two numbers:" ;
	cin >> a;
	cin >> b;
	cout << "Addition of two numbers is: "<< a + b << endl;
	cout << "Substraction of two numbers is: " << a-b << endl;
	cout << "Multiplication of two numbers is: " << a*b << endl;
	cout << "Division of two numbers is: " << a/(float)b << endl;
	cout << "Modulus of two numbers is: " << a % b <<endl;

	return 0;
}

