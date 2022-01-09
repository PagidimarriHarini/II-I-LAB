#include <iostream>
#include <string>
using namespace std;
int main(){
	char str[10];
	int i, vowels = 0;
	cout << "Enter the string: ";
	cin >> str;
	for(i = 0; i < sizeof(str)/sizeof(str[0]); i++){
		if(str[i] == 'a'|| str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			vowels++;
		}
	}
	cout << vowels;
	
	return 0;
}
