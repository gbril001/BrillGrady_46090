/*  
 * File:   main.cpp 
 * Author: Grady Brill 
 * Purpose: Homework, Gaddis 7th Ed Prob4 
 * Created on June 24, 2015, 10:39 AM 
 */ 
#include <iostream> 
using namespace std; 
int main( ) 
{ 
int number_of_pods, peas_per_pod, total_peas; 
cout << "Press return after entering a number.\n"; 
cout << "Enter the number of pods:\n"; 
cin >> number_of_pods; 
cout << "Enter the number of peas in a pod:\n"; 
cin >> peas_per_pod; 
total_peas = number_of_pods + peas_per_pod; 
cout << "If you have "; 
cout << number_of_pods; 
cout << " pea pods\n"; 
cout << "and "; 
cout << peas_per_pod; 
cout << " peas in each pod, then\n"; 
cout << "you have "; 
cout << total_peas; 
cout << " peas in all the pods.\n"; 
return 0; 
 } 