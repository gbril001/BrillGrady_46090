/* 
 * File:   main.cpp
 * Author: Grady Brill
 * Purpose: Homework, Gaddis 7th Ed CH2 Prob. 18 Energy Drink
 * Created on June 23, 2015, 12:45 PM
 * 
 */
//System Libraries

#include <iostream> //I/O Library
using namespace std;//namespace for iostream
//Global Constants
const float CNVPCT = 100.0f;
//Prototype Functions
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
    // People= number of people surveyed
    // pEdrnks= one or more energy drinks
    // pCdrnks= citrus flavored energy drinks
//declare initialize variables    
unsigned short cSurv=12467; // Number of customer surveyed 
unsigned short  nEdrnks;// Number of customers that drink more than one energy drink 
unsigned short nCdrnks;//Number of customers that prefer citrus energ drink 
unsigned char pEdrnks=14; 
unsigned char pCdrnks=64; 
 
//calculate the number of drinkers 
nEdrnks= cSurv*pEdrnks/CNVPCT; 
nCdrnks= nEdrnks*pCdrnks/CNVPCT; 
//Output the results 
cout<<"Number of Energy Drinkers = " <<nEdrnks<<endl; 
cout<<"Number of Citrus Drinkers = " <<nCdrnks <<endl;
    return 0;
}

