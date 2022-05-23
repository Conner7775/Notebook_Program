// Notebook_Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "Notebook_Program.h"
#include <filesystem>


using namespace std;

static int FILECOUNT = 0;

Notebook::Notebook() {
    filename = "Untitled-" + FILECOUNT++;
}

Notebook::Notebook(string f, string c) {
    filename = f;
    content = c;

}

void Notebook::noteGen() {
    Notebook temp;
    cout << "Name your new note: ";
    cin >> temp.filename;
    ofstream outfile(temp.filename);
    outfile << temp.filename + ": " << endl;
    outfile.close();
    temp.noteID++;
    
}

void Notebook::access() {


}

void Notebook::rename() {

}

void Notebook::removeNote() {
   
}

void Notebook::menu() {
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

string Notebook::getFileName() {
    return filename;
}

string Notebook::getContent() {
    return content;
}

int Notebook::getNoteID() {
    return noteID;
}

int fileCount() {
    auto dirIter = std::filesystem::directory_iterator("directory_path");
    int fileCount = 0;

    for (auto& entry : dirIter)
    {
        if (entry.is_regular_file())
        {
            ++fileCount;
        }
    }
    return fileCount;
}

int main()
{
    Notebook obj;
    obj.menu();
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
