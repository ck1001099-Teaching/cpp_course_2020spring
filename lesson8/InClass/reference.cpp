#include <iostream>
using namespace std;

void Add1(int a){
	a = a + 1;
}

void Add2(int* a){
	*a = *a + 2;
}

void Add3(int& a){
	a = a + 3;
	cout << &a << endl;
}

int main(){
	int a = 10;
	Add1(a);
	cout << a << endl;
	Add2(&a);
	cout << a << endl;
	Add3(a);
	cout << &a << endl;
	cout << a << endl;
	return 0;
}