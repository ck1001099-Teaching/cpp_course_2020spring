#include <iostream>
using namespace std;

int main(){
	// Input
	double score[10];
	cout << "請輸入 10 個學生的成績: ";
	for (int i = 0 ; i < 10 ; i++){
		cin >> score[i];
	}
	// Logic
	double mean = 0.0;
	for (int i = 0 ; i < 10 ; i++){
		mean = mean + score[i];
	}
	mean = mean / 10;

	// Output
	cout << "平均成績: " << mean << endl;

	return 0;
}