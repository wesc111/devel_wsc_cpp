// WSC 16 bit CRC calculator
// WSC, 17-Jan-2025

#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

#include "crcCalculator.h"

// set the seed value
void crcCalculator::setSeed(unsigned int s)
{
    seed=s;
    crcVal=s;
}

// set the polynomial value
void crcCalculator::setPoly(unsigned int p)
{
    poly=p;
}

// set the debug level
void crcCalculator::setDebugLevel(int dl)
{
    debug=dl;
}

// print the resulting CRC value
void crcCalculator::printResult(int level)
{
    if (level==0)
        cout << "CRC result value: " << std::hex << crcVal << "\n";
    else
        cout << "CRC input " << std::hex << inVal << " - CRC result value: " << std::hex << crcVal << "\n";
}

// print the polynomial
void crcCalculator::printPoly()
{
    cout << "Polynomial value: " << std::hex << poly << "\n";
}

// print the seed value
void crcCalculator::printSeed()
{
    cout << "Seed value: " << std::hex << seed << "\n";
}

// calc the CRC result with input value a
void crcCalculator::calc(unsigned int a)
{
    bool msb;

    inVal=a;
    crcVal=crcVal^a;
    if (debug)
        cout << "Start      CRC value is : " << std::hex << crcVal << " " << std::bitset<16>(crcVal) << "\n";
    for (int i=0; i<16; i++) {
        msb = (crcVal & 0x8000) >> 15;
        crcVal = (crcVal << 1) & 0xFFFF;
        if (debug)
            cout << "Shift " << std::dec << i << "    Data is: " << std::hex << crcVal << " " << std::bitset<16>(crcVal) << " ";
        if (msb) {
            crcVal = crcVal ^(poly & 0xFFFF);
            if (debug) {
                cout << "--> XOR\n";
                cout << "           Poly is: " << std::hex << poly << " " << std::bitset<16>(poly) << "\n";
                cout << "----------------------------------------\n";
                cout << "         Result is: " << std::hex << crcVal << " " << std::bitset<16>(crcVal) << "\n";
            }
        } else {
            if (debug)
                cout << "--> \n";
        }
    }
    
}
