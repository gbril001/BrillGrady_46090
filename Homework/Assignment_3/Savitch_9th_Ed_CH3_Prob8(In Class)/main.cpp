/*    
 * File:   main.cpp   
 * Author: Grady Brill   
 * Purpose: Savitch 9th Ed Ch3 Prob8 
 * Created on July at 12:31pm   
 */   
//System Libraries   
#include <iostream>//I/O Library   
#include <cmath>
   
using namespace std; //namespace for iostream   
//User Libraries  
  
//Global Constants   
const float PI=4*atan(1);
//Function Prototypes   
  
//Execution Begins Here!   
int main(int argc, char** argv) {   
    //Declare and initialize Variables  
    int nTerms=200000;
    double apprxPI= 1;
    
    //Now Calculate PI with a for-loop
    for(int i=3,nTerm=1;nTerm<=nTerms; i+=4,nTerm+=2){
        apprxPI+=(-1.0f/i+1.0f/ (i+2));
    }
    apprxPI*=4;
      
   //Output the results and compare
    cout<< "Exact value of PI = "<<PI<<endl;
    cout<<"The approximate value of PI = "<<apprxPI<<endl;

    return 0;   
} 

