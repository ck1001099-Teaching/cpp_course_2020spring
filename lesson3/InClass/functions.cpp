#include <iostream>
using namespace std;
//�p���Ʀ��� (��J: int a, int n �A��X: a^n) 
int power(int, int);
//��X�|�Ӿ�Ƥ����̤j�� (��J: int a, int b, int c, int d �A��X: max(a,b,c,d))
int max(int, int, int, int);
//�b�ù��W�L�X10�檺 Hello, World (��J: void �A��X: void)
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
