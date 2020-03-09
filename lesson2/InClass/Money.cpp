#include <iostream>
using namespace std;

int main(){
	// Input
	int money;
	cout << "請輸入購買總金額: ";
	cin >> money;
	
	// Processing
	int finalMoney;
	if (money > 2000){
		finalMoney = money * 0.7;
	} else {
		finalMoney = money;
	}
	
	// Output
	cout << "實際需付: " << finalMoney << endl;
	
	return 0;
}
