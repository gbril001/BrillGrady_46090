/*    
 * File:   main.cpp   
 * Author: Grady Brill   
 * Purpose: Savitch 8th Ed CH2 Problem 13
 * Created on July 2, 2015, 10:23 AM   
 */   
//System Libraries   
#include <iostream>//I/O Library   
#include <cmath>
   
using namespace std; //namespace for iostream   
//User Libraries  
  
//Global Constants   
  
//Function Prototypes   
  
//Execution Begins Here!   
int main(int argc, char** argv) {   
//Declare Variables   
    float Mph;//pace in miles per hour
    int Mps;//Miles per hour in sec
    float Min;
    float MinR;
    float Sec;
    
//Output   
    cout<<"What is your current pace in mph?"<<endl;
    cin>>Mph;
    Mps= 3600/Mph;
    Min= Mps/60.0f;
    MinR= Mps%60;
    Sec= (MinR/60)*60.0f;
    cout<<MinR<<endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"That is "<<static_cast<int>(Min)<<" minutes and "<<Sec<<" seconds per mile."<<endl;
    return 0;   
} 

