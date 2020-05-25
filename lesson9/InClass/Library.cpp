#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book{
public:
	string name;
	string author;
	string ISBN;
	double price;
};

class Database{
public:
	vector<Book> books;
	void AddBook();
	void Display();
};

int main(){
	Database db;
	int command;
	bool isQuit;
	while (cin >> command){
		switch (command){
			case 0:
				isQuit = true;
				break;
			case 1:
				cout << "新增書籍" << endl;
				db.AddBook();
				break;
			case 2:
				cout << "顯示書庫資訊" << endl;
				db.Display();
				break;
		}
		if (isQuit){
			cout << "結束程式" << endl;
			break;
		}
	}

	return 0;
}

void Database::AddBook(){
	Book book;
	cout << "請輸入書籍資料" << endl;
	cout << "書名: ";
	cin >> book.name;
	cout << "作者: ";
	cin >> book.author;
	cout << "書號: ";
	cin >> book.ISBN;
	cout << "價格: ";
	cin >> book.price;
	books.push_back(book);
}

void Database::Display(){
	for (int i = 0 ; i < books.size() ; i++){
		cout << "編號 " << i << endl;
		cout << "書名: " << books[i].name << endl;
		cout << "作者: " << books[i].author << endl;
		cout << "書號: " << books[i].ISBN << endl;
		cout << "價格: " << books[i].price << endl;
	}
}