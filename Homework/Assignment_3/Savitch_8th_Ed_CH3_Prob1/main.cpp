/*     
 * File:   main.cpp    
 * Author: Grady Brill    
 * Purpose: Savitch 8th Ed CH3 Prob1
 * with an infinite sequence
 * Created on July 4, 2015, 12:55 PM    
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
    char user1;
    char user2;
    char P, R, S;
    char p= P;
    char r= R;
    char s= S;
    bool doAgain= true;
//Output the results
    do{

        cout<<"User 1 enter P, R, or S."<<endl;
                cin>>user1;
        cout<<"User 2 enter P, R, or S."<<endl;
                cin>>user2;        
                if ((user1=='P'&& user2=='P'))
                    cout<<"Nobody Wins"<<endl;
                
                else if ((user1=='S') && (user2=='S'))
                    cout<<"Nobody Wins"<<endl;
                    
                else if ((user1=='R') && (user2=='R'))
                    cout<<"Nobody Wins"<<endl; 
                     
                else if (user1=='P' && user2=='R')
                    cout<<"User 1 wins: Paper covers rock"<<endl;
                
                else if (user1=='R' && user2=='P')
                    cout<<"User 2 wins: Paper covers rock"<<endl;
                
                else if (user1=='S' && user2=='P')
                    cout<<"User 1 wins: Scissors cut paper"<<endl;
                
                else if (user1=='P' && user2=='S')
                    cout<<"User 2 wins: Scissors cut paper"<<endl;
                
                else if (user1=='R' && user2=='S')
                    cout<<"User 1 wins: Rock breaks scissors"<<endl;
                
                else if (user1=='S' && user2=='R')
                    cout<<"User 2 wins: Rock breaks scissors"<<endl;
                
        cout<<"Would you like to play again? Enter y for yes or n for no.\n"; 
    char response; 
    cin>>response; 
    if (response=='y')doAgain=true; 
    else doAgain=false; 
        }while(doAgain);
    return 0;    
}