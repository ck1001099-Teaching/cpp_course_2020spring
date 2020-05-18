#include "Rectangle.h"

void Rectangle::setLength(int l){
	length = l;
}
void Rectangle::setWidth(int w){
	width = w;
}
int Rectangle::getLength(){
	return length;
}
int Rectangle::getWidth(){
	return width;
}
int Rectangle::perimeter(){
	return 2 * (length + width);
}
int Rectangle::area(){
	return length * width;
}
