#include <iostream>
using namespace std;

int main(){
	int a = 30;
	cout << a << endl;
	cout << &a << endl;
	int *ptr = &a;
	cout << ptr << endl;
	cout << &ptr << endl;

	cout << *ptr << endl;
	*ptr = *ptr + 1;
	cout << a << endl;

	cout << *&a << endl;

	cout << (*ptr)*(*ptr) << endl;



	return 0;
}