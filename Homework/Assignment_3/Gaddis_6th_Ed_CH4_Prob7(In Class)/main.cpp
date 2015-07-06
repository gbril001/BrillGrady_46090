/*
* File: main.cpp 
* Author: Grady Brill 
* Purpose: Gaddis 6th Ed CH4 Prob7   
* with an infinite sequence 
* Created on July 2, 2015, 12:55 PM 
*/ 
//System Libraries 
 #include <iostream>//I/O Library 
 #include <iomanip> 
 #include <cmath> 
  
 using namespace std; //namespace for iostream 
	  
 //User Libraries 
	  
 //Global Constants 
	  
 //Function Prototypes 
	  
 //Execution Begins Here! 
	  
 int main(int argc, char** argv) { 
 //Declare Variables 
	  
 unsigned int sec, secf, min, hour, day, week, month, year; 
 unsigned int yearR, monthR, weekR, dayR, hourR, minR;   
//Output the results 

cout<<"How many seconds are there?"<<endl; 
cin>>sec; 	  
 year= (sec/31536000);// for 1 month 2592000 seconds 
 yearR=(sec%31536000); 
 month= (((yearR))/2592000); 
 monthR= (((yearR))%2592000); 
 week= (monthR)/604800; 
 weekR= ((monthR)%604800); 
 day= (weekR)/86400; 
 dayR= ((weekR)%86400);
 hour=dayR/3600; 
 hourR=(dayR%3600);
 min=dayR/60;
 minR=dayR%60;
 secf=minR;
 cout<<"That is "<<year<<" years, "<<month<<" months, "<<week<<" weeks, " 
 <<day<<" days, "<<hour<<" hours, "<<min<<" minutes, and "
 <<secf<<" seconds left over"<<endl;
	  
	  
 return 0; 
        } 
