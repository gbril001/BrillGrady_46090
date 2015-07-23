/*      
 * File:   main.cpp     
 * Author: Grady Brill     
 * Purpose: Gaddis 6th Ed CH7: Problem 3
 * Created on July 10, 2015, 10:23 AM     
 */     
//System Libraries     
#include <iostream>//I/O Library  
#include <string>
#include <iomanip>
     
using namespace std; //namespace for iostream     
//User Libraries    
    
//Global Constants     
    
//Function Prototypes     
    
//Execution Begins Here!     
int main(int argc, char** argv) {     
//Declare Variables     
    int SIZE=5;
    int highm,lowm;
    string salsa[]={"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    float sales[SIZE];
    float Sales;
    float high,low;
//Output  
    
    for(int i=0; i<SIZE; i++){
        cout<<"Enter the sales for "<<salsa[i]<<" Salsa"<<endl;
        cin>>Sales;
        sales[i]=Sales;}
                cout<<fixed<<showpoint<<setprecision(2)<<endl;      
    for(int i=0; i<SIZE; i++){
       cout<<setw(6)<<salsa[i]<<" $"<<sales[i]<<endl;
                }
high=sales[0];
for(int i=0; i<SIZE; i++){
    if(sales[i]>high){
        high=sales[i];
        highm=i;}
            }
    
low=sales[0];
for(int i=0; i<SIZE; i++){
        if(sales[i]<low){
            low=sales[i];
            lowm=i;}
                }
cout<<"The salsa with the highest sales is "<<salsa[highm]<<" Salsa with $"<<sales[highm]<<endl;
cout<<"The salsa with the lowest sales is "<<salsa[lowm]<<" Salsa with $"<<sales[lowm]<<endl;
    return 0;     
}   
 