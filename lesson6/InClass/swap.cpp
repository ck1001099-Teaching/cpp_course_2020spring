#include <iostream>
using namespace std;

void swap(void*, void*, int);

int main(){
	int a = 2, b = 4;
	double c = 3.14, d = 6.28;
	char e = 'A', f = 'Y';

	swap(&a, &b, sizeof(int));
	swap(&c, &d, sizeof(double));
	swap(&e, &f, sizeof(char));
	cout << a << " " << b << endl; // 4 2
	cout << c << " " << d << endl; // 6.28 3.14
	cout << e << " " << f << endl; // Y A

	return 0;
}

void swap(void* ptr1, void* ptr2, int len){
	char* p1 = (char*)ptr1;
	char* p2 = (char*)ptr2;
	for (int i = 0 ; i < len ; i++){
		int tmp = *(p1+i);
		*(p1+i) = *(p2+i);
		*(p2+i) = tmp;
	}
}