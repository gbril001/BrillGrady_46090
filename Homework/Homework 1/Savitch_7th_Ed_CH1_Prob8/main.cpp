/* 
 * File:   main.cpp
 * Author: Grady Brill
 * Purpose: Homework, Savitch 7th Ed CH1 Prob8
 * Created on June 25, 2015, 10:23 AM
 */
//System Library
#include <iostream>//I/O Library

using namespace std; //namespace for iostream
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    int quarter, dime, nickel;
    int Q, D, N;
    int VQ, VD, VN;
    int TCV;
    //Q equals the number of quarters
    //D equals the number of dimes
    //N equals the number of nickels
    //VQ equals the value of all the quarters
    //VD equals the value of all the dimes
    //VN equals the value of all the nickels
    //TCV is the Total Coin Value
    quarter =25;
    dime =10;
    nickel =5;
//Output
    cout << "Enter the number of Quarters you have: "<< endl;
    cin >> Q;
    VQ = Q * quarter;
    cout << "Enter the number of Dimes you have: "<< endl;
    cin >> D;
    VD = D * dime;
    cout << "Enter the number of Nickels you have: "<< endl;
    cin >> N;
    VN = N * nickel;
    TCV = (VQ + VD +VN);
    cout << "The total value off all your coins is "<< TCV<<" cents"<<"\n";
    TCV = (VQ + VD +VN);
    return 0;
}

