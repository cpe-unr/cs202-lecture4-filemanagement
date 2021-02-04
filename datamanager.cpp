//
// Created by Keith Lancaster on 2/4/21.
//

#include "datamanager.h"
#include <fstream>

using namespace std;

int countLinesInFile(string fileName) {
    ifstream inputFile;
    int numLines;
    inputFile.open(fileName);
    string tmp;
    while(getline(inputFile, tmp)){
        numLines++;
    }
    inputFile.close();
    return numLines;
}
