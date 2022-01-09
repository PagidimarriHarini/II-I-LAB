#include <iostream>
#include <string>
using namespace std;
class Employee{
	public:
		string EmployeeName;
		int ID;
		int salary;
	void read(){
		cout << "Enter employee details ";
		cin >> EmployeeName >> ID >> salary;
	}
	void display(){
		cout << "Employee Name is " << EmployeeName << endl;
		cout << "ID is " << ID << endl;
		cout << "Salary is " << salary << endl;
	}	
};
int main(){
	Employee e;
	e.read();
	e.display();
	return 0;
}

