#include <iostream>
using namespace std;
int main() {
	int n,i,evenElements=0;
	cout << "Enter number of elements: ";
	cin >> n;
	int integers[n];
	cout << "Enter elements: ";
	for(i = 0; i < n; i++){
		cin >> integers[i];
	}
	for(i = 0; i < n; i++){
		int count = 0;
		int x = integers[i];
		while( x > 0){
			count++;
			x = x/10;


		}
		if(count % 2 == 0){
			evenElements++;
		}
	}
	cout << "No.of even digits is "<< evenElements;

	return 0;
}
