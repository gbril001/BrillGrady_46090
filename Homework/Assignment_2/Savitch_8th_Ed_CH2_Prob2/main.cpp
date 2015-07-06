/*    
 * File:   main.cpp   
 * Author: Grady Brill   
 * Purpose: Savitch 8th Ed CH2 Prob2 
 * Created on June 25, 2015, 10:23 AM   
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
    float wtgoal,wtmouse;//diet weight goal and the weight of the mouse
    float ASKmse;//Amount of sweetener needed to kill mouse
    float wtratio;//weight ratio of mouse to dieter
    float Ssweet;//Maximum Safe amount of sweetener to eat
    bool doAgain= true;
//Output
        do{
    cout<<"Enter all of the following weights requested in the same units"<<endl;
    cout<< "What is your final weight goal?\n";
    cin>>wtgoal;
    cout<<"What was the weight of the mouse?\n";
    cin>>wtmouse;
    cout<<"How much artificial sweetener did it take to kill the mouse?\n";
    cin>>ASKmse;
    wtratio=wtgoal/wtmouse;
    Ssweet= wtratio * ASKmse;
    cout<<"The maximum amount of sweetener you can consume is: "<<Ssweet<<endl;
    cout<<"Would you like to do it again? Enter y for yes or n for no.\n";
    char response;
    cin>>response;
    if (response=='y')doAgain=true;
    else doAgain=false;
        }while(doAgain);
 
    return 0;   
}  
 

