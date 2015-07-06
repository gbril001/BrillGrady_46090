/*    
 * File:   main.cpp   
 * Author: Grady Brill   
 * Purpose: Fibonacci Sequence to generate crud, Savitch CH3 Problem 10
 * Created on July 2, 2015, 11:05 AM   
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
    unsigned short fi=1, fip1=1, fip2;
    unsigned char terms=10;
    float crudWt, nDays;
    
    //Print the initial conditions
    cout<<"Input the initial crud weight in pounds"<<endl;
    cin>>crudWt;
    cout<<"Input the number of days allowed to grow"<<endl;
    cin>>nDays;
    
    //Scale the number of days to the Fibonacci Sequence
    terms=nDays/5+1;//Scale by 5 days and start at an term=1;
    
    //Given the 3 conditions
    if(terms==1){
        cout<<"The crud weight after "<<nDays<<" = "<<crudWt<<"(lbs)"<<endl;
    }else if(terms==2){
        cout<<"The crud weight after "<<nDays<<" = "<<crudWt<<"(lbs)"<<endl;
    }else{
 
    //Loop show the terms as you generate
    for(unsigned char term=3;term<=terms;term++){
        //Calculate the next term in the sequence
        fip2=fi+fip1;
        //Output the current term
        //Now shift
        cout<<"The "<<static_cast<int>(term)<<" in the sequence = "<<fip2<<endl; 
        fi=fip1;
        fip1=fip2;
        }
        cout<<"The crut wt after"<<nDays<<" = "<<fip2*crudWt<<"(lbs)"<<endl;
    }

        //Exit stage right
return 0;   
}  
 
 
