#include <iostream>
using namespace std;

int main(){
	// Input -> no input
	
	// Logic (process)
	for (int i = 0 ; i < 100 ; i++){
		int number = i + 1;
		if (number >= 2){
			bool isPrimeNumber = true;
			
			for (int j = 2 ; j < number ; j++){
				// j: 2 ~ number-1
				if (number % j == 0){
					// isn't prime number
					isPrimeNumber = false;
					break;
				}
			}
			// Output
			if (isPrimeNumber){
				cout << number << endl;
			}
		}
	}
	
	return 0;
}
