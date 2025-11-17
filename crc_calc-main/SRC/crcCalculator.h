// crcCalculator.h
// WSC, 17-Jan-2025

#pragma once

class crcCalculator {

public: crcCalculator() {
            debug=0;
            crcVal=0;
            poly=0;
            inVal=0;
            seed=0;
        }
        void setPoly(unsigned int p);
        void setSeed(unsigned int s);
        void setDebugLevel(int dl);
        void printResult(int level);
        void printPoly();
        void printSeed();
        void calc(unsigned int a);

private:
        int debug;
        unsigned int crcVal;
        unsigned int poly;
        unsigned int seed;
        unsigned int inVal;

};