#include <iostream>
using namespace std;

void swap(int*, int*);

int main(){

	int a = 30;
	int b = 20;

	cout << a << " " << b << endl;
	swap(&a, &b);
	cout << a << " " << b << endl;

	return 0;
}

void swap(int* ptr_a, int* ptr_b){
	int tmp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = tmp;
}



