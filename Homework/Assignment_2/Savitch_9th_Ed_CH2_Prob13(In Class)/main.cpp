/*    
 * File:   main.cpp   
 * Author: Grady Brill   
 * Purpose: Lab, Chocolate Bars; Savitch 9th Ed Ch2 Prob13  
 * Created on June 25, 2015, 10:23 AM   
 */   
//System Libraries   
#include <iostream>
#include <fstream>
   
using namespace std; //namespace for iostream   
//User Libraries  
  
//Global Constants   
  
//Function Prototypes   
  
//Execution Begins Here!   
int main(int argc, char** argv) {  
    
//Declare Variables   
    unsigned short weight, height,age, bmr;
        //All units are non SI, so pounds, inches, and years
    unsigned char numCbar, calCbar=230;
    char sex;
    ifstream input;   
    //Loop as long as we have data
    input.open("bmr.dat");//have to go create bmr.dat 
                         //input.open opens a file to read from
    while(input>>sex>>weight>>height>>age){
        //Calculate BMR due to sex
        if(sex=='F'){
            bmr=655+4.3*(weight)+4.7*(height)-4.7*(age);
        }else{
            bmr=66 + 6.3*(weight)+12.9*(height)-6.8*(age);
        }
        numCbar= bmr/calCbar;
        //Output the Results
        cout<<"Sex = "<<sex<<endl;
        cout<<"Weight = "<<weight<<"(lbs)"<<endl;
        cout<<"Height = "<<height<<" (inches)"<<endl;
        cout<<"Age = "<<age<<" (years)"<<endl;
        cout<<"BMR = "<<bmr<<" cal"<<endl;
        cout<<"Number of candy bars per day you may consume = "
                <<static_cast<int>(numCbar)<<endl;
        cout<<endl<<endl;
    } 
    return 0;   
} 
//notepad ++ was used to create the bmr.dat, also static_cast<int>(numCbar)
//was used because it was an unsigned char so it had to be statically casted
// the cout<<endl<<endl; created the two spaces between 
