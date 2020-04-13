#include <iostream>
using namespace std;

int main(){
	double array[8];
	for (int i = 0 ; i < 8 ; i++){
		cout << "第" << i << "個元素的位址: " << &array[i] << endl;
		array[i] = 100 - i;
	}
	cout << array << endl;
	cout << *array << endl;
	cout << array[4] << endl;
	cout << *array+4 << endl;
	cout << *(array+4) << endl;

	return 0;
}





