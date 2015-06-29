/*  
 * File:   main.cpp 
 * Author: Grady Brill 
 * Purpose: Homework, Gaddis 7th Ed Prob5 
 * Created on June 24, 2015, 10:39 AM 
 */ 
//System Libraries
#include <iostream> //I/O Library
using namespace std;
int main(int argc, char** argv) {
//Declare Variables
        int Sum, Product;
        int intgrA, intgrB;
//Input Variables
        int A, B;
//Output 
cout << "Integer A is equal to: \n";
        cin>>intgrA;
cout << "Integer B is equal to: \n";
        cin>>intgrB;
Sum = intgrA+intgrB;// The sum of integers A and B
Product = intgrA*intgrB;// The product on integers A and B
cout << "Sum of Integers A & B = "<< Sum<< endl;
cout << "Product of Integers A & B = "<<Product<< endl;
return 0; 
 } 