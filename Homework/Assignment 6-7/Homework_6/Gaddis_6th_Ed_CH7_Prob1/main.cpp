/*     
 * File:   main.cpp    
 * Author: Grady Brill    
 * Purpose: Gaddis 6th Ed CH7: Problem 1
 * Created on July 10, 2015, 10:23 AM    
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
    int SIZE=10;
    float array[SIZE];
    float value;
    float high, low;
//Output    
    for(int i=0; i<SIZE;i++){
        cout<<"Enter value "<<(i+1)<<endl;
        cin>>value;
        array[i]=value;
    }
    high = array[0];
for (int i= 1; i < SIZE; i++){
    if (array[i] > high)
    high = array[i];
    }
 low=array[0];
for (int i = 0; i < SIZE; i++){
    if (array[i] < low)
    low = array[i];
        }
 cout<<"The smallest value is "<<low<<endl;
 cout<<"The largest value is "<<high<<endl;

    return 0;    
}  
 
 

