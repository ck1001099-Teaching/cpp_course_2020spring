#include <iostream>
using namespace std;

int main(){
	// Input
	int money;
	cout << "�п�J�ʶR�`���B: ";
	cin >> money;
	
	// Processing
	int finalMoney;
	if (money > 2000){
		finalMoney = money * 0.7;
	} else {
		finalMoney = money;
	}
	
	// Output
	cout << "��ڻݥI: " << finalMoney << endl;
	
	return 0;
}
