#ifndef book_H
#define book_H

#include <string>

struct book {
	int id;
	string title;
	string Newauther;

	void Setup(const string & newTitle, const string & newAuthor, 
		int newId);
	string formatted();

};

#endif
