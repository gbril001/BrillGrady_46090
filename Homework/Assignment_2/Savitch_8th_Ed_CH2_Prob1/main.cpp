/*    
 * File:   main.cpp   
 * Author: Grady Brill   
 * Purpose: Savtich 8th Ed CH2 Prob1 
 * Created on June 25, 2015, 10:23 AM   
 */   
//System Libraries   
#include <iostream>//I/O Library  
#include <iomanip>
#include <cstdlib>
   
using namespace std; //namespace for iostream   
//User Libraries  
  
//Global Constants   
const float Mton= 35273.92;// Metric Ton in ounces
const float Ounce = 1/35273.92f;//Ounce in metric tons
//Function Prototypes   
  
//Execution Begins Here!   
int main(int argc, char** argv) {   
//Declare Variables   
    float OBcrl;//Ounces in box of cereal
    float NBcrl;// Number of boxes of Cereal
    float MTBcrl;//Metric Tons per box of cereal
    bool doAgain= true;
//Output
        cout.setf(ios::fixed); 
        cout.setf(ios::showpoint); 
        cout.precision(6); 
        do{
    cout<<"How many ounces are in the box of cereal?\n";
    cin>>OBcrl;
    MTBcrl= Ounce * OBcrl;
    cout<<"The number of metric tons in the box of cereal is: "<<MTBcrl<<endl;
    NBcrl= Mton/MTBcrl;
    cout<<"It would take "<<static_cast <int>(NBcrl)<<
            " boxes of cereal to make a metric ton!"<<endl;
    cout<<"Would you like to do it again? Enter y for yes or n for no.\n";
    char response;
    cin>>response;
    if (response=='y')doAgain=true;
    else doAgain=false;
        }while(doAgain);
 
    return 0;   
}  
 

