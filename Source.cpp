#include<iostream>
using namespace std;
int main() {
	int num1, num2, result = 0;
	
	
	do {
		cout << "Enter the value : " << endl;
		cin >> num1;
		cout << "Enter the value   : " << endl;
		cin >> num2;

		if (num1 > 0) {
		
			result = result + num1;
		
		}
		if (num2 > 0) {
			
			result = result + num2;
			
		}
	}
		while (result <= 10);
		cout << "Result = " << result;
		return 0;
	}