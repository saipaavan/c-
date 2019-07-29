#include<iostream>
using namespace std;
int main() {
	
	int input;
	
	cout << "Enter a number to be checked : ",
	cin >> input;
	
	if(input%2==0) {
		cout << input << " is even";
	}
	
	else {
		cout << input << " is odd";
	}
	
return 0;
}
