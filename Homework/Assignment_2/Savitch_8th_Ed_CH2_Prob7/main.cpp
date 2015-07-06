/*    
 * File:   main.cpp   
 * Author: Grady Brill   
 * Purpose: Savitch 8th Ed CH2 Problem 7
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
    int hours;
    float payrate;
    float OvrTime;//Overtime pay rate
    float SStax=0.06;//Social Security tax;
    float FIntax=0.14;//Federal Income tax
    float StIntax=0.05;//State Income tax
    int Union=10;//Union fees
    int Health=35;//Health Insurance fees
    float grsspay;//gross pay
    float tkhpay;//Take home pay
    float paywh;//Pay withheld
    bool doAgain=true;
//Input  
    
//Output   
    do{
    cout<<"How many hours did you work this week?"<<endl;
    cin>>hours;
    cout<<"Enter your pay rate per hour"<<endl;
    cin>>payrate;
    OvrTime= 0.5 *payrate;
    grsspay= (hours*payrate) +((hours%40)*OvrTime);
    paywh= (grsspay*SStax)+(grsspay*FIntax)+(grsspay*StIntax)+Union +Health;
    tkhpay= grsspay - paywh;
    cout<<"Gross pay for the week: $"<<grsspay<<endl;
    cout<<"Pay withheld for the week: $"<<paywh<<endl;
    cout<<"The take home pay for the week is: $"<<tkhpay<<endl;
  cout<<"Would you like to do it again? Enter y for yes or n for no.\n";
    char response;
    cin>>response;
    if (response=='y')doAgain=true;
    else doAgain=false;
        }while(doAgain);
    return 0;   
} 

