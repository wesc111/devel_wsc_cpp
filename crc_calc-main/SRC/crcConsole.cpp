// WSC 16 bit CRC calculator
// WSC, 17-Jan-2025

// using boost library, installed with brew command
// $arch -arm64 brew install boost
// at:  /opt/homebrew/Cellar/boost/1.87.0

// reference CRC values can be found by using an online calculator,
//    e.g. https://www.sunshine2k.de/coding/javascript/crc/crc_js.html

#include <iostream>
#include <vector>

using namespace std;

#include "crcCalculator.h"

#define DEBUG_ARGS 0

int main(int argc, char* argv[]) {
    crcCalculator myCrc;

    vector<int> inDataVec;
    string inStr;
    int inInt;

    if (DEBUG_ARGS)
        cout << "argc == " << argc << '\n';

    for (int i=1; i<argc; i++) {
        inStr = std::string(argv[i]);
        inInt = stoul(inStr, 0, 16);
        inDataVec.push_back(inInt);
        if (DEBUG_ARGS)
            std::cout << "argv[" << i << "] == " << inStr << " " << inInt << '\n';
    }

    cout << "===== CRC calculation: \n";

    myCrc.setSeed(0x0);
    myCrc.setPoly(0x8005);
    myCrc.printSeed();
    myCrc.printPoly();
    myCrc.setDebugLevel(0);

    for (int i=0;i<inDataVec.size();i++) {
        myCrc.calc(inDataVec[i]);
        myCrc.printResult(1);
    }

}
