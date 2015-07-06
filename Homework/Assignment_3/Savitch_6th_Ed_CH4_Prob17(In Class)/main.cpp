/*     
 * File:   main.cpp    
 * Author: Grady Brill    
 * Purpose: Gaddis 6th Ed CH4 Prob17
 * with an infinite sequence
 * Created on July 2, 2015, 12:55 PM    
 * read in wavelenth(m) and outputting what band you are in
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
    float wavel;
    bool doAgain= true;
//Output the results
    do{
    cout<<"What is the wavelength in meters?"<<endl;
    cin>>wavel;
    if(wavel>=1e-2)
        cout<<"You are in the Radio Wave Band"<<endl;
    else if(wavel>=1e-3&&wavel<=1e-2)
        cout<<"You are in the Microwave Band"<<endl;
    else if(wavel>=7e-7&&wavel<=1e-3)
        cout<<"You are in the Infrared Band"<<endl;
    else if(wavel>=4e-7&&wavel<=7e-7)
        cout<<"You are in the Visible Light Band"<<endl;
    else if(wavel>=1e-8&&wavel<=4e-7)
        cout<<"You are in the Ultraviolet Band"<<endl;
    else  if(wavel>=1e-11&&wavel<=1e-8)
        cout<<"You are in the X-Ray Band"<<endl;
    else if(wavel<=1e-11)
        cout<<"You are in the Gamma Ray Band"<<endl;
        cout<<"Would you like to do it again? Enter y for yes or n for no.\n"; 
    char response; 
    cin>>response; 
    if (response=='y')doAgain=true; 
    else doAgain=false; 
        }while(doAgain);
    return 0;    
} 


