#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
	Rectangle rect;
	int l, w;
	cin >> l >> w;
	rect.setLength(l);
	rect.setWidth(w);
	cout << "Perimeter: " << rect.perimeter() << endl;
	cout << "Area: " << rect.area() << endl;
	return 0;
}