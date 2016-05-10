# programming1#include <string>
#include <iostream>
#include <fstream>
using namespace std;
#include "lib.h"

void lib::intlibrary(){
	ifstream input("lib.txt");
	string buffer;
	int bookCount;
	input >> buffer;
	input >> buffer;
	input >> buffer;
	int id;
	string title;
	string first, middle, last;
	bookCount = 0;
	while (input >> id >> title >> first >> middle >> last)
	{
		booklist[bookCount].title = title;
		booklist[bookCount].id = id;
		booklist[bookCount].auther = first + " " + middle + " " last;
		bookCount++;

	}
	input.close();

}

int lib:: GetValidInput(int min, int max) {
	int x;

	cout << "Please enter a number between: "
		<< min << " and "
		<< max << ": ";
	cin >> x;

	while (x < min || x > max)
	{
		cout << "Invalid" << endl;
		cout << "Please enter a number between: "
			<< min << " and "
			<< max << ": ";
		cin >> x;
	}

	return x;
}

int lib:: MainManu() {
	int choice;
	cout << "1. Public Access\n";
	cout << "2. Admin Access\n";
	cout << "3. exit\n";
	choice = GetValidInput(1, 3);

	return choice;
}

int lib:: AdminManu(){
	cout << "1. Upadte book /n";
	cout << "2. Add Book /n";
	cout << "3 Export database\n";
	int choice;
	choice = GetValidInput(1, 3);
	return choice;
}

int lib:: PublicManu() {
	cout << "1. search by title \n";
	cout << "2 search by auther \n";
	int choice;
	choice = GetValidInput(1, 2);
	return choice;
}

void lib ::Run() {
	bool done;
	while (!done){
		int choice;
		cin >> choice;
		if (choice == 1) { PublicManu(); }
		else if (choice == 2) { AdminManu(); }
		else { done = true; }
	}
}

void lib::RunAdmin(); { RunMenu(1,3);
	int choice;
	cin >>choice;
	if (choice == 1) { UpdateBook ();}
	if (choice == 2)  {addbook ();}
	if (choice ==3) {SaveLibrary();}


}

void lib ::RunPublic();{ RunPublic (1,2)
int choice;
cin >> choice;
if (choice == 1) {SearchByTitle();}
if (choice == 2) {SearchByAuther();}

}
