// Notebook_Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "Notebook_Program.h"

using namespace std;

void noteGen() {
    string filename;
    cout << "Name of your note: ";
    cin >> filename;
    ofstream o(filename);
    o << filename + ": " << endl;
    o.close();
    
}

void access() {

}

void rename() {

}

void removeNote() {

}

void menu() {
    int choice = 0;
    cin >> choice;
    while (choice != 5) {
        cout << "1. Create a new note" << endl;
        cout << "2. Select from existing notes" << endl;
        cout << "3. Rename note" << endl;
        cout << "4. Delete a note" << endl;
        cout << "5. Quit" << endl;

        switch (choice) {
        case 1: 
            noteGen();
            break;
        case 2:
            access();
            break;
        case 3:
            rename();
            break;
        case 4:
            removeNote();
            break;
        case 5:
            return;
        }
    }

}

int main()
{
    menu();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
