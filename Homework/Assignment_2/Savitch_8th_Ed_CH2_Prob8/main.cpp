/*    
 * File:   main.cpp   
 * Author: Grady Brill   
 * Purpose: Savitch 8th Ed CH2 Problem 8
 * Created on July 2, 2015, 10:23 AM   
 */   
//System Libraries   
#include <iostream>//I/O Library   
   
using namespace std; //namespace for iostream   
//User Libraries  
  
//Global Constants   
  
//Function Prototypes   
  
//Execution Begins Here!   
int main(int argc, char** argv) {   
//Declare Variables   
    float Ccost;//The current cost of the item
    int years;//number of years the item will be purchased
    float inflat;//inflation percentage
    float Fcost;//Future cost of the item
    int numyr=0;
    
//Output   
    cout<<"What is the cost of the item in dollars?"<<endl;
    cin>>Ccost;
    cout<<"What is the number of years from now the item will be purchased?"<<endl;
    cin>>years;
    cout<<"What is the inflation percentage?"<<endl;
    cin>>inflat;
    while (numyr < years){
        Ccost= Ccost + ((inflat/100)*Ccost);
                years--;}
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"The cost in "<<years<<" will be $"<<Ccost<<endl;
    
    return 0;   
} 
