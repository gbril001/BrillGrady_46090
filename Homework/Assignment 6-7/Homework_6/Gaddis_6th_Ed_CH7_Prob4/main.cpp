/*      
 * File:   main.cpp     
 * Author: Grady Brill     
 * Purpose: Gaddis 6th Ed CH7: Problem 4
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
    string Days[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int NumMky=3;
    int NumDay=7;
    int Food, Sum1=0,Sum2=0,Sum3=0,SumT;
    int low1, high1, low3;
    int food[NumMky][NumDay];
//Output  
    for(int i=0; i<NumDay;i++){
        cout<<"How many pounds of food did Monkey 1 eat on Day "<<Days[i]<<endl;
        cin>>Food;
        food[0][0+i]=Food;
    }
    for(int i=0; i<NumDay;i++){
        cout<<"How many pounds of food did Monkey 2 eat on Day "<<Days[i]<<endl;
        cin>>Food;
        food[1][0+i]=Food;
    }
     for(int i=0; i<NumDay;i++){
        cout<<"How many pounds of food did Monkey 3 eat on Day "<<Days[i]<<endl;
        cin>>Food;
        food[2][0+i]=Food;
    }
    cout<<"         ";
    for (int i=0; i<7; i++){
        cout<<setw(9)<<Days[i]<<" ";}
    cout<<endl;
    cout<<"Monkey 1 ";
    for (int i=0; i<7; i++){
        cout<<setw(9)<<food[0][0+i]<<" ";}
    cout<<endl;
    cout<<"Monkey 2 ";
    for (int i=0; i<7; i++){
        cout<<setw(9)<<food[1][0+i]<<" ";}
    cout<<endl;
    cout<<"Monkey 3 ";
    for (int i=0; i<7; i++){
        cout<<setw(9)<<food[2][0+i]<<" ";}
    
    for(int k=0; k<7;k++){
        Sum1+=food[2][0+k];}
    for(int j=0; j<7;j++){
        Sum2+=food[1][0+j];}
    for(int i=0; i<7;i++){
        Sum3+=food[0][0+i];}
    SumT=Sum1+Sum2+Sum3;
    
    low1=food[0][0];
    high1=-1;
    for(int i=0;i<3;i++){
        for(int k=0;k<7;k++){
            if(food[i][k]<low1){
                low1=food[i][k];
            }
            if(food[i][k]>high1){
                high1=food[i][k];
            }
        }
    }

    
    cout<<endl;
    cout<<"The average amount of food eaten per day by the family of monkeys is "<<(SumT/7)<<" pounds."<<endl;
    cout<<"The lowest amount of any one monkey on any day of the week is "<<low1<<" pounds."<<endl;
    cout<<"The highest amount of any one monkey on any day of the week is "<<high1<<" pounds."<<endl;
    
    return 0;     
}  