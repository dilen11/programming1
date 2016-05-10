#ifndef lib_H
#define lib_H
using namespace std;
#include "book.h"

struct lib
{
	book bookList[80];
	int bookSize;
	int bookCount;

	void intlibrary();
	int GetValidInput(int min, int max);
	int MainManu();
	int AdminManu();
	int PublicManu();
	void Run();
	void RunAdmin;
 
};
#endif
