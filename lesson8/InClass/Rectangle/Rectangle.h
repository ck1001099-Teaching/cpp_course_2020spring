#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
	void setLength(int);
	void setWidth(int);
	int getLength();
	int getWidth();
	int perimeter();
	int area();
private:
	int length, width;
};

#endif