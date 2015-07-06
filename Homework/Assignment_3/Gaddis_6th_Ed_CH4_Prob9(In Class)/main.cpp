/*    
 * File:   main.cpp   
 * Author: Grady Brill   
 * Purpose: Lab, Math Tutor Program; Gaddis 6th Ed Ch4 Prob9
 * Created on June 25, 2015, 10:23 AM   
 */   
//System Libraries   
#include <iostream>//I/O Library   
#include <iomanip>
#include <cstdlib>
#include <ctime>
   
using namespace std; //namespace for iostream   
//User Libraries  
  
//Global Constants   
  
//Function Prototypes   
  
//Execution Begins Here!   
int main(int argc, char** argv) {   
    //set the random seed
    srand(static_cast<unsigned int>(time(0)));
//Declare Variables   
    unsigned short op1, op2, result;
    bool doAgain=true;
    
    //Loop based upon continuing to play with the math tutor
    do{
        //Determine op1/op2
        op1=rand()%900+100;//gives us a number between 100 and 999
        op2=rand() %900+100;//[100-999]
        //Display the problem
        cout<<setw(6)<<op1<<endl;//setw() set the length of the cout line
        cout<<" + "<<op2<<endl;
        cout<<"------"<<endl;
        doAgain= false;
        //Input the value for the sum
        cin>>result;
        //If correct output congratulations else try again?
        if(result==op1 +op2){
            cout<<endl<<"Congratulations!"<<endl;
        }else{
            cout<<endl<<"Wrong Answer"<<endl;
            cout<<"The answer was "<<op1+op2<<endl;
        }
           //Prompt if they would like to continue
        cout<<"Would you like to continue y/n"<<endl;
        char response;
        cin>>response;
        if(response=='y')doAgain=true;
        else doAgain=false;
        //doAgain=false breaks the system and ends the process.
    }while(doAgain);
      
    //Exit Stage right
    return 0;   
} 
