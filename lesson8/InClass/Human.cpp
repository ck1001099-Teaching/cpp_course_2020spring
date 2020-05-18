#include <iostream>
#include <string>
using namespace std;

class Human{
public:
	Human(){}
	Human(string name, double weight, double height){
		this->name = name;
		this->weight = weight;
		(*this).height = height;
		cout << "初始化1" << endl;
		cout << this << endl;
	}
	Human(double weight, double height){
		this->weight = weight;
		(*this).height = height;
		cout << "初始化2" << endl;
	}
	Human(Human& h){
		h_ptr = &h;
	}
	~Human(){
		if (h_ptr != NULL){
			cout << (*h_ptr).GetName() << endl;	
		}
		cout << "釋放資源: " << weight << endl;
	}
	string GetName(){
		return name;
	}
	Human* GetThisPtr(){
		return this;
	}
private:
	string name;
	double weight;
	double height;
	Human* h_ptr = NULL;
};

int main(){
	cout << "程式開始" << endl;
	Human h1("Cindy", 2.4, 50);
	cout << &h1 << endl;
	Human h2(2.5, 60);
	cout << h2.GetThisPtr() << endl;
	cout << &h2 << endl;
	Human h3(h1);
	cout << "程式結束" << endl;
	return 0;
}