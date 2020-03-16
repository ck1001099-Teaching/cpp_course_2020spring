#include <iostream>
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()
using namespace std;

int main(){
	srand(time(NULL)); // seed
	
	int number = rand()%100+1; // 1~100
	
	int lowerBound = 1;
	int upperBound = 100;
	
	while (true){
		cout << "�вq�@�� " << lowerBound << "��" << upperBound << "�������Ʀr: ";  
		int guess;
		cin >> guess;
		if ( !(guess >= lowerBound && guess <= upperBound) ){
			cout << "�ЧA�q�b���T���d��" << endl;
			continue; 
		}
		
		if (guess == number){
			cout << "���ߧA�q��F!" << endl; 
			break;
		} else if (guess > number){
			upperBound = guess - 1;
		} else if (guess < number){
			lowerBound = guess + 1;
		}
	}
	
	return 0;
}
