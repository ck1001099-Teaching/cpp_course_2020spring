#include <iostream>
using namespace std;

int main(){
	// Input
	double height, weight;
	cout << "�п�J����(m): ";
	cin >> height;
	cout << "�п�J�魫(kg): ";
	cin >> weight;
	
	// Processing 
	double BMI = weight / (height * height);
	
	// Output
	cout << "�A��BMI�O " << BMI << endl;
	
	if (BMI >= 24){
		cout << "�A�L���F!" << endl;
	} else if (BMI <= 17){
		cout << "�A�L���F!" << endl; 
	} else {
		cout << "���`�H!" << endl; 
	}
	return 0;
}
