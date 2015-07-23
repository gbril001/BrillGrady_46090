/*      
 * File:   main.cpp     
 * Author: Grady Brill     
 * Purpose: Gaddis 6th Ed CH7: Problem 2
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
  int SIZE=12;
  int rainfll[SIZE];
  int rain, YrRain=0;
  int high,low,highm,lowm;
//Output     
  for(int i=0; i<SIZE; i++){
      cout<<"Enter the rainfall in inches for month "<<(i+1)<<endl;
      cin>>rain;
      rainfll[i]=rain;
  }    
  for (int i=0; i<SIZE; i++){
      YrRain+=rainfll[i];
  }
  cout<<"The total rainfall in inches for the year is "<<YrRain<<endl;
  cout<<"The average monthly rainfall in inches is "<<(static_cast<int>((YrRain)/12))<<endl;
  high=rainfll[0];
  for (int i=0; i<SIZE;i++){
      if (rainfll[i] > high){
        high=rainfll[i] ;
        highm=i+1;}
  }
  low=rainfll[0];
  for (int i=0; i<SIZE;i++){
      if (rainfll[i] < low){
        low=rainfll[i];
        lowm=i+1;}
  }
  cout<<"The month with the highest rainfall in inches is month "<<highm<<endl;
  cout<<"The month with the lowest rainfall in inches is month "<<lowm<<endl;
    return 0;     
}   
 