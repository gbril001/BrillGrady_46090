/*     
 * File:   main.cpp    
 * Author: Grady Brill    
 * Purpose: Savitch 8th Ed CH3 Problem 11, Approximate e^x 
 * with an infinite sequence
 * Created on July 2, 2015, 10:23 AM    
 */    
//System Libraries    
#include <iostream>//I/O Library    
#include <iomanip>
#include <cmath>
    
using namespace std; //namespace for iostream    
//User Libraries   
   
//Global Constants    
   
//Function Prototypes    
   
//Execution Begins Here!    
int main(int argc, char** argv) {    
//Declare Variables    
    float x=2.0f;
    float ex=1.0f;
    char nterms=30;
    //Utilize a for-loop to calculate e^x
    for(int term=1;term<=nterms;term++){
        float fact=1; //fact stands for factori
        //Loop and find the n factorial value
        for(int i=1;i<=term;i++){
            fact*=i;
        } 
        ex+=pow(x,term)/fact;
    }
    
//Output the results
        cout<<fixed<<showpoint<<setprecision(15)<<endl;
        cout<<"Exact  e("<<x<<")="<<exp(x)<<endl;
        cout<<"Approx e("<<x<<")="<<ex<<endl;
    return 0;    
} 

