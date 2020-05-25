#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Book{
public:
	string name;
	string author;
	string ISBN;
	double price;
	int index;
};

class Database{
public:
	vector<Book> books;
	void AddBook();
	void Display();
	Database();
	~Database();
	void RemoveBookByIndex(int);
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
			case 3:
				cout << "移除書籍" << endl;
				cout << "請輸入想要移除的書籍的編號: ";
				int index;
				cin >> index;
				db.RemoveBookByIndex(index);
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

	int maxIndex = 0;
	for (int i = 0 ; i < books.size() ; i++){
		if (maxIndex < books[i].index){
			maxIndex = books[i].index;
		}
	}
	book.index = maxIndex + 1;

	books.push_back(book);
}

void Database::Display(){
	for (int i = 0 ; i < books.size() ; i++){
		cout << "編號 " << books[i].index << endl;
		cout << "書名: " << books[i].name << endl;
		cout << "作者: " << books[i].author << endl;
		cout << "書號: " << books[i].ISBN << endl;
		cout << "價格: " << books[i].price << endl;
	}
}

Database::~Database(){
	ofstream ofs;
	ofs.open("database", ios::out);
	if (!ofs){
		cout << "存檔失敗" << endl;
	} else {
		for (int i = 0 ; i < books.size() ; i++){
			ofs << books[i].index << " " << books[i].name << " "
				<< books[i].author << " " << books[i].ISBN << " "
				<< books[i].price << endl;
		}
		ofs.close();
	}
}

Database::Database(){
	ifstream ifs;
	ifs.open("database", ios::in);
	if (!ifs){
		cout << "開啟失敗或檔案不存在" << endl;
	} else {
		Book book;
		while (ifs >> book.index >> book.name >> book.author
				   >> book.ISBN >> book.price){
			books.push_back(book);
		}
		ifs.close();
	}
}

void Database::RemoveBookByIndex(int index){
	for (vector<Book>::iterator iter = books.begin() ; iter != books.end() ; iter++){
		if ((*iter).index == index){
			books.erase(iter);
			break;
		}
	}
	// for (int i = 0 ; i < books.size() ; i++){
	// 	if (books[i].index == index){
	// 		books.erase(books.begin()+i);
	// 		break;
	// 	}
	// }
}