#ifndef Notebook_Program_H
#define Notebook_Program_H
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Notebook {
private:
	string filename;
	string content;
	int noteID;
public:
	Notebook();
	Notebook(string, string);
	void menu();
	void noteGen();
	void access();
	void rename();
	void removeNote();
	string getFileName();
	string getContent();
	int getNoteID();

};

#endif;