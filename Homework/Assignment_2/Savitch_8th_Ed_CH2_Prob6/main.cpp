/*    
 * File:   main.cpp   
 * Author: Grady Brill   
 * Purpose: Savitch 8th Ed CH2 Problem 6
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
    int roomcap;//Maximum room capacity
    int numppl;//Number of people attending the meeting
    int min, max;
    int minmore, maxless;//The number of people that can or can not attend.
    bool doAgain=true;
//Output
 do{ 
    cout<<"What is the maximum room capacity?"<<endl;
    cin>>max;
    cout<<"What is the number of people attending the meeting?"<<endl;
    cin>>numppl;
    minmore= max - numppl;
    maxless= numppl - max;
    if (numppl<=max)
        cout<<"It is legal to hold the meeting and "<<minmore<<
                " people can join the meeting"<<endl;
    else 
        cout<<"The meeting is not legal. "<<maxless<<
                " people must leave in order to have the meeting"<<endl;
 
    cout<<"Would you like to do it again? Enter y for yes or n for no.\n";
    char response;
    cin>>response;
    if (response=='y')doAgain=true;
    else doAgain=false;
        }while(doAgain);
    
    return 0;   
} 

