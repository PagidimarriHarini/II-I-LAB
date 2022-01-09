#include <iostream>
#include <exception>
using namespace std;
class A: public exception{
	public:
		const char* showexc() const throw(){
			return "Exception caught: Divide by zero";
		}
};
class B:public A{
	public:
		float a, b;
		void read(){
			cout << "Enter a and b" << endl;
			cin >> a >>b;
		}
		void calculate(){
			try{
				if(b == 0){
					throw b;
				}else{
					cout << "Division of a and b is " << a/b << endl;
				}
			}
			catch(float x){
				cout << showexc();
			}
		}
};
int main(){
	B obj;
	obj.read();
	obj.calculate();
	return 0;
}

