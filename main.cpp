#include <iostream>
#include <fstream>
#include <string>
#include "datamanager.h"

using namespace std;


const string LINES[] = {"a line here", "a line there", "and then you have lines"};

//#define USE_BAD
#ifdef USE_BAD
    const string FILENAME = "";
#else
    const string FILENAME = "outfile.txt";
#endif

int main() {

    ofstream outFile(FILENAME);
    if(outFile){
        for(string line: LINES){
            outFile << line << endl;
        }
        outFile.close();
    } else {
        // cout << "Error opening file: " << strerror(errno) << endl;
        // This call works on macOS and may work on Windows, but not on Ubuntu
        cout << "Error opening file!" << endl;
    }
    if(outFile.good()){

        int lines = countLinesInFile(FILENAME);
        cout << "File successfully written." << endl;
        cout << "The file " << FILENAME << " contains " << lines << " lines" << endl;

        ifstream input;
        input.open(FILENAME);
        string value;
        cout << "Words in file\n";
        if(input) {
            while(input >> value){
                cout << value << ",";
            }
        }
        cout << endl;
        input.close();
    }


    return 0;
}
