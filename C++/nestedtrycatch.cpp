#include <iostream>
#include <exception>
using namespace std;
class A{
	public:
		float a, b;
	void read(){
		cout << "Enter two integers a and b ";
		cin >> a >> b;
	}
	void Calculate(){
		try{

			try{
				if(b == 0){
					throw b;
				}
				else{
					cout << "Division of a and b is " << a/b << endl; 
				}
				

			}
			catch(float x){
				cout << "Exception caught1: Divide by zero" << endl;
			        throw;
			}
		}
		catch(float x){
			cout << "Exception caught2: Divide by zero" << endl;
		}
	}
};
int main(){
	A obj;
	obj.read();
	obj.Calculate();
	return 0;
}


