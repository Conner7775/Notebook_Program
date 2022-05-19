#ifndef Notebook_Program_H
#define Notebook_Program_H
#include <iostream>
#include <map>

using namespace std;

class Notebook {
private:
	map<string,int> B;
public:
	void menu();
	void noteGen();
	void access();
	void rename();
	void removeNote();

};

#endif;