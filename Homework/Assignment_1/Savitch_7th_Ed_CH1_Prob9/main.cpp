/* 
 * File:   main.cpp
 * Author: Grady Brill
 *Purpose: Homework, Free Fall Savitch 7th Ed CH1 Prob9
 * Created on June 23, 2015, 12:06 PM
 */
//System Libraries
#include <iostream> //I/O Library
using namespace std;//namespace for iostream
//User Libraries
//Global Constants
float GRAVITY=32.174; //Acceleration due to gravity earth (ft/sec^2)
//Function Prototypes
//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    //dist=the distance dropped in feet
    //time= time (s)
    float dist;
    float time;
    
    //Prompt then input the time
    cout<<"To calculate the distance dropped\n";
    cout<<"Input the Time in Seconds\n";
    cout<<"Time should be in floating point format\n";
    cin>>time;
    //Calculate the free-fall distance
    //dist=1/2*GRAVITY*time*time;// incorrect
    //dist=1.0f/2*GRAVITY*time*time/2;// correct
    dist=1/2.0*GRAVITY*time*time;//correct
            //outpute the results
    cout<<"The distance traveled= ";
    cout<<dist<<"(ft)"<<endl;
    return 0;
}

