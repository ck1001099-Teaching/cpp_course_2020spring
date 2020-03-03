#include <iostream>
#include <string> // 提供了一個資料型態: string
using namespace std;

int main(){
	// 資料型態 變數名稱1, 變數名稱2,...;
	// 整數: integer
	int x;
	x = 5; // 賦值(assign)
	cout << x < endl;
	x = 10;
	cout << x << endl;

	x = x + 1;
	cout << x << endl;

	// 小數(浮點數): float(單精度浮點數), double(雙精度浮點數)
	float y = 3.14;
	double z;
	z = 6.28;
	cout << y * z << endl;

	// 布林(boolean): bool
    bool flag = true; // false;
    cout << flag << endl;

    // 字元(character): char
    char c = 'A';
    cout << c << endl;

    // 字串: string
    string str = "Hello Kitty!";
    cout << str << endl;

    return 0;
}