/*  
 * File:   main.cpp 
 * Author: Grady Brill 
 * Purpose: Lab 4, Violent Crimes
 * Created on June 25, 2015, 10:23 AM 
 */ 
//System Library 
#include <iostream>//I/O Library  
#include <iomanip> 
#include <fstream> 
#include <cstdlib> 
#include <ctime> 
#include <cmath>
 
 
using namespace std; //namespace for iostream 
//User Libraries 
//Global Constants 
//Function Prototypes 
//Execution Begins Here! 
int main(int argc, char** argv) { 
//Declare Variables 
    float UScrime,USpop, UKcrime, UKpop;
    float USpct, UKpct;
    float UK_US;
    ofstream out;
    //UScrime is the number of violent crimes in the US
    //USpop is the population of the US
    //UKcrime is the number of violent crimes in the UK
    //UKpop is the population of the UK
    //USpct is the percentage of violent crimes with respect to the US population
    //UKpct is the percentage of violent crimes with respect to the US population
    //UK_US is the ratio of UK crime percentage to US crime percentage
   //Input 
    UScrime = 11.88e6;
    USpop = 318e6;
    UKcrime = 6.52e6;
    UKpop = 64.1e6;
    USpct = (UScrime/USpop)*100;
    UKpct = (UKcrime/UKpop)*100;
    UK_US = UKpct/USpct;
//Output 
    cout << "The percentage of violent crimes in the US is "<<setprecision(3)<<USpct<<"%"<<endl;
    cout << "The percentage of violent crimes in the UK is "<<setprecision(4)<<UKpct<<"%"<<endl;
    cout<<"The UK's crime percentage is "<<setprecision(2)<<UK_US<<" times that of the US!\n";
    return 0; 
}