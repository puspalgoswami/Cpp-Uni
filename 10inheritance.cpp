#include <iostream>
#include <cstring>
using namespace std;

class Media{
protected:
	char title[100];
	char publication[100];
	
public:
	virtual void read(){
		cout << "Enter title: ";
		cin >> title;
		cout << "Enter publication: ";
		cin >> publication;
	}
	
	virtual void show(){
		cout << "Title: " << title << endl;
		cout << "Publication: " << publication << endl;
	}
};

class Book : public Media{
	int pages;

public:
	void read(){
		cout << "\nEnter title: ";
		cin >> title;
		cout << "Enter publication: ";
		cin >> publication;
		cout << "Enter pages: ";
		cin >> pages;
	}
	
	void show(){
		cout << "\nThis is a book named " << title;
		cout << " published by " << publication;
		cout << " and it has " << pages << " pages" << endl;
	}
};

class Tape : public Media{
		float time;

public:
	void read(){
		cout << "\nEnter title: ";
		cin >> title;
		cout << "Enter publication: ";
		cin >> publication;
		cout << "Enter time: ";
		cin >> time;
	}
	
	void show(){
		cout << "\nThis is a tape called " << title;
		cout << " published by " << publication;
		cout << " and its playing time is " << time << endl;
	}
};

int main(){
	cout << "Don't use spacebar while giving input" <<  endl;
	Book b;
	b.read();
	b.show();
	
	Tape t;
	t.read();
	t.show();
	
	return 0;
}
