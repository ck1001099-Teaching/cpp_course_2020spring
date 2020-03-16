#include <iostream>
using namespace std;
//計算整數次方 (輸入: int a, int n ，輸出: a^n) 
int power(int, int);
//找出四個整數中的最大值 (輸入: int a, int b, int c, int d ，輸出: max(a,b,c,d))
int max(int, int, int, int);
//在螢幕上印出10行的 Hello, World (輸入: void ，輸出: void)
void HelloWorld();

int main(){
	
	cout << power(2, 3) << endl; // 8
	cout << power(10, 4) << endl; // 10000
	cout << power(8, 0) << endl; // 1
	
	cout << max(1, 2, 3, 4) << endl; // 4
	cout << max(310, 120, 3213, 19) << endl; // 3213
	cout << max(4, 4, 4, 4) << endl; // 4 
	
	HelloWorld()
	return 0;
}

int power(int a, int n){
	int number = 1;
	for (int i = 0 ; i < n ; i++){
		number = number * a;
	}
	return number;
}

int max(int a, int b, int c, int d){
	int number = a;
	if (number < b){
		number = b;
	}
	if (number < c){
		number = c;
	}
	if (number < d){
		number = d;
	}
	return number;
}

void HelloWorld(){
	for (int i = 0 ; i < 10 ; i++){
		cout << "Hello, World!" << endl;
	}
	return;
}
