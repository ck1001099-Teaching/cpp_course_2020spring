#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Object{
public:
	int index;
	string name;
};

class Scene{
public:
	vector<Object> objects;
	void AddObject();
	void AddObject(Object);
	void Remove(int);
	void Remove(string);
	void Display(int);
	void Display();
private:
};

int main(){
	Scene scene;
	int command;
	bool isQuit = false;
	while (true){
		cout << "請輸入指令: ";
		cin >> command;

		string name;
		int index;
		Object obj;
		switch (command){
			case 0:
				isQuit = true;
				break;
			case 1:
				scene.AddObject();
				break;
			case 2:
				cin >> obj.name;
				scene.AddObject(obj);
				break;
			case 3:
				cin >> index;
				scene.Remove(index);
				break;
			case 4:
				cin >> name;
				scene.Remove(name);
				break;
			case 5:
				cin >> index;
				scene.Display(index);
				break;
			case 6:
				scene.Display();
				break;
		}
		if (isQuit){
			break;
		}
	}

	return 0;
}

void Scene::AddObject(){
	Object obj;
	int maxIndex = 0;
	for (int i = 0 ; i < objects.size() ; i++){
		if (objects[i].index > maxIndex){
			maxIndex = objects[i].index;
		}
	}
	obj.index = maxIndex + 1;
	obj.name = "New Object";
	objects.push_back(obj);
}

void Scene::AddObject(Object obj){
	int maxIndex = 0;
	for (int i = 0 ; i < objects.size() ; i++){
		if (objects[i].index > maxIndex){
			maxIndex = objects[i].index;
		}
	}
	obj.index = maxIndex + 1;
	objects.push_back(obj);
}

void Scene::Remove(int index){
	vector<Object>::iterator iter;
	for (iter = objects.begin() ; iter != objects.end() ; iter++){
		if ((*iter).index == index){
			break;
		}
	}
	if (iter != objects.end()){
		objects.erase(iter);
	}
}

void Scene::Remove(string name){
	vector<Object>::iterator iter;
	for (iter = objects.begin() ; iter != objects.end() ; iter++){
		if ((*iter).name == name){
			break;
		}
	}
	if (iter != objects.end()){
		objects.erase(iter);
	}
}

void Scene::Display(int index){
	vector<Object>::iterator iter;
	for (iter = objects.begin() ; iter != objects.end() ; iter++){
		if ((*iter).index == index){
			cout << "編號: " << (*iter).index << ": " << (*iter).name << endl;
			break;
		}
	}
}
void Scene::Display(){
	for (int i = 0 ; i < objects.size() ; i++){
		cout << "編號: " << objects[i].index << ": " << objects[i].name << endl;
	}
}