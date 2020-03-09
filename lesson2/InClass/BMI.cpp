#include <iostream>
using namespace std;

int main(){
	// Input
	double height, weight;
	cout << "請輸入身高(m): ";
	cin >> height;
	cout << "請輸入體重(kg): ";
	cin >> weight;
	
	// Processing 
	double BMI = weight / (height * height);
	
	// Output
	cout << "你的BMI是 " << BMI << endl;
	
	if (BMI >= 24){
		cout << "你過重了!" << endl;
	} else if (BMI <= 17){
		cout << "你過輕了!" << endl; 
	} else {
		cout << "正常人!" << endl; 
	}
	return 0;
}
