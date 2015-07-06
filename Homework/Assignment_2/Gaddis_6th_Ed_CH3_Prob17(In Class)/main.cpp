/*    
 * File:   main.cpp   
 * Author: Grady Brill   
 * Purpose: Gaddis 6th Ed CH3 Prob17 
 * Created on July 1, 2015, 10:23 AM   
 */   
//System Libraries   
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
    float I, L;// I is interest in full percent and L is Loan Amount 
    int N;//N is number of payments
    float MonPay;//Monthly Payments
//Output the Results
    cout<< "Enter the Loan Amount:                                       $"<<setw(8);
    cin>>L;
    cout<< "Enter the Interest Amount:                                   %"<<setw(8);
    cin>>I; 
    cout<< "Enter the Number of Payments in months:                       "<<setw(8);
    cin>>N;
    float top, bottom;
    float intst=I/100.0f;//intst is interest in decimal form
        cout.setf(ios::fixed); 
        cout.setf(ios::showpoint); 
        cout.precision(2);
    
    top = (intst * pow((1+intst),N) *L);
    bottom = (pow((1 + intst),N) - 1);
    MonPay = top/bottom;
    MonPay = static_cast<int> (MonPay*100)/100.0f;// Exact ammount in pennies
    float TotIntst;//Total interest accrued over the life of the loan
    TotIntst = (MonPay * N) - L;
    
    cout<< "Your monthly payment is:                                     $"<<setw(8)<<MonPay<<endl;
    cout<< "The amount of interest you pay over the life of the loan is: $"<<setw(8)<<TotIntst<<endl;
    cout<< "The total loan amount is:                                    $"<<setw(8)<<L + TotIntst<<endl;
    
    return 0;   
} 

