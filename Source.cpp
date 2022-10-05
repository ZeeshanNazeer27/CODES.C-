#include<iostream>
using namespace std;
int main() {
	int arr[5] = { 4,2,7,1,9 };
	int temp, i, j;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "The sorted array in ascending order is " << endl;
	for (i = 0; i < 5; i++)
		cout << " " << arr[i];
	return 0;
}
