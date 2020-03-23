#include <iostream>
#include <math.h> // pow(a, n)
using namespace std;

int main(){
	// Input
	int n;
	cin >> n;
	double coefficient[n+1];
	for (int i = 0 ; i < n+1 ; i++){
		cin >> coefficient[i];
	}
	double x;
	cin >> x;

	// Logic
	double result = 0.0;
	for (int i = 0 ; i < n+1 ; i++){
		result = result + coefficient[i] * pow(x, n-i);
	}

	// Output
	cout << "答案: " << result << endl;

	return 0;
}