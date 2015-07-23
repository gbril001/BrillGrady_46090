/*      
 * File:   main.cpp     
 * Author: Grady Brill     
 * Purpose: Gaddis 6th Ed CH7: Problem 5
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
    int Qtr=4;
    int Div=7;
    int sales;
    int Sales[Div][Qtr];
    string div[]={"Quarter 1","Quarter 2","Quarter 3","Quarter 4"};
//Output  
    for(int i=0;i<Qtr; i++){
        cout<<"What is the Division 1 sales for Quarter "<<i+1<<"?"<<endl;
        cin>>sales;
        Sales[0][i]=sales;}
    for(int i=0;i<Qtr; i++){
        cout<<"What is the Division 2 sales for Quarter "<<i+1<<"?"<<endl;
        cin>>sales;
        Sales[1][i]=sales;}
    for(int i=0;i<Qtr; i++){
        cout<<"What is the Division 3 sales for Quarter "<<i+1<<"?"<<endl;
        cin>>sales;
        Sales[2][i]=sales;}
    for(int i=0;i<Qtr; i++){
        cout<<"What is the Division 4 sales for Quarter "<<i+1<<"?"<<endl;
        cin>>sales;
        Sales[3][i]=sales;}
    for(int i=0;i<Qtr; i++){
        cout<<"What is the Division 5 sales for Quarter "<<i+1<<"?"<<endl;
        cin>>sales;
        Sales[4][i]=sales;}
    for(int i=0;i<Qtr; i++){
        cout<<"What is the Division 6 sales for Quarter "<<i+1<<"?"<<endl;
        cin>>sales;
        Sales[5][i]=sales;}
    
    cout<<endl;
    cout<<"           Quarter 1 Quarter 2 Change  Quarter 3 Change  Quarter 4 Change";
    cout<<endl;
    cout<<"Division 1";
    for(int i=0; i<Qtr; i++){
        cout<<setw(10)<<Sales[0][i];
        if(i>=1)
        cout<<" "<<setw(6)<<Sales[0][i]-Sales[0][(i-1)]<<" ";
        }
    cout<<endl;
    cout<<"Division 2";
    for(int i=0; i<Qtr; i++){
        cout<<setw(10)<<Sales[1][i];
        if(i>=1)
        cout<<" "<<setw(6)<<Sales[1][i]-Sales[1][(i-1)]<<" ";
        }
    cout<<endl;
    cout<<"Division 3";
    for(int i=0; i<Qtr; i++){
        cout<<setw(10)<<Sales[2][i];
        if(i>=1)
        cout<<" "<<setw(6)<<Sales[2][i]-Sales[2][(i-1)]<<" ";
        }
    cout<<endl;
    cout<<"Division 4";
    for(int i=0; i<Qtr; i++){
        cout<<setw(10)<<Sales[3][i];
        if(i>=1)
        cout<<" "<<setw(6)<<Sales[3][i]-Sales[3][(i-1)]<<" ";
        }
    cout<<endl;
    cout<<"Division 5";
    for(int i=0; i<Qtr; i++){
        cout<<setw(10)<<Sales[4][i];
        if(i>=1)
        cout<<" "<<setw(6)<<Sales[4][i]-Sales[4][(i-1)]<<" ";
        }
    cout<<endl;
    cout<<"Division 6";
    for(int i=0; i<Qtr; i++){
        cout<<setw(10)<<Sales[5][i];
        if(i>=1)
        cout<<" "<<setw(6)<<Sales[5][i]-Sales[5][(i-1)]<<" ";
        }
    int Sum1=0,Sum2=0,Sum3=0,Sum4=0;
    for(int i=0; i<Div; i++){
        Sum1+=Sales[i][0];
    }
    for(int i=0; i<Div; i++){
        Sum2+=Sales[i][1];
    }
    for(int i=0; i<Div; i++){
        Sum3+=Sales[i][2];
    }
    for(int i=0; i<Div; i++){
        Sum4+=Sales[i][3];
    }
    cout<<endl;
    cout<<setw(10)<<"Average"<<setw(10)<<Sum1<<setw(10)<<Sum2<<setw(10)<<Sum3<<setw(10)<<Sum4<<endl;
    
    return 0;     
}  