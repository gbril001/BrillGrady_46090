/*    
 * File:   main.cpp   
 * Author: Grady Brill   
 * Purpose: Savitch 8th Ed CH2 Problem 3
 * Created on July 4, 2015, 10:23 AM   
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
    int Cyear;//Current yearly salary
    float incpct;//Pay increase percentage
    int Rmonth;//Months pay is being retroactively increased
    float Asalary;//Salary being added to each month
    float Nmonth;//New monthly salary
    float salary;//New yearly salary 
    
    //Input  

    //Output   
    cout <<"What is your current annual salary?"<<endl;
    cin>>Cyear;
    cout<< "What is the pay increase percentage?"<<endl;
    cin>>incpct;
    cout<<"How many months is the pay being increased retroactively for?"<<endl;
    cin>>Rmonth;
    Asalary =((Cyear/12)*(incpct/100))*Rmonth;
    Nmonth = Asalary + (Cyear/12);
    salary= Nmonth *12;
    cout<<"Your new monthly salary is $"<<Nmonth<<endl;
    cout<<"Your new annual salary is $"<<salary<<endl;
    return 0;
}
