#include <iostream>
#include <string>
using namespace std;
class Student{
	public:
	string name;
	int rollno;
	int marks;
	void read();
	void display();
}s[3];
void Student::read(){
	for(int i = 0; i < 3; i++){
		cin >> s[i].name >> s[i].rollno >> s[i].marks;
	}
}
void Student::display(){
	for(int i = 0; i < 3; i++){
		cout << s[i].name << endl;
		cout << s[i].rollno << endl;
		cout << s[i].marks << endl;
	}
}
int main(){
	s[3].read();
	s[3].display();
	cout << s[0].name;
	return 0;
}

