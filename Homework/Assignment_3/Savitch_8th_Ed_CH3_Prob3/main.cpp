/*      
 * File:   main.cpp     
 * Author: Grady Brill     
 * Purpose: Savitch 8th Ed CH3 Prob3 
 * Created on July 5, 2015, 12:55 PM
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
    bool doAgain= true; 
    int bday; 
    int bmonth; 

     
//Output the results 
    do{ 
 
cout<<"Enter the day you were born"<<endl; 
cin>>bday; 
cout<<"Enter your month of birth numerically (ex. January=1)"<<endl; 
cin>>bmonth; 
 
         
            if ((bmonth==3) && (bday>=21)) 
            cout<<"Your horoscope sign is Aries"<<endl; 
            else if ((bmonth==4) && (bday<=19)) 
            cout<<"Your horoscope sign is Aries"<<endl; 
            else if ((bmonth==4) && (bday>=20)) 
            cout<<"Your horoscope sign is Taurus"<<endl; 
            else if (bmonth==5 && bday<=20) 
            cout<<"Your horoscope sign is Taurus"<<endl; 
            else if (bmonth==5 && bday>=21) 
            cout<<"Your horoscope sign is Gemini"<<endl; 
            else if (bmonth==6 && bday<=21) 
            cout<<"Your horoscope sign is Gemini"<<endl; 
            else if (bmonth==6 && bday>=22) 
            cout<<"Your horoscope sign is Cancer"<<endl; 
            else if (bmonth==7 && bday<=22) 
            cout<<"Your horoscope sign is Cancer"<<endl; 
            else if (bmonth==7 && bday>=23) 
            cout<<"Your horoscope sign is Leo"<<endl; 
            else if (bmonth==8 && bday<=22) 
            cout<<"Your horoscope sign is Leo"<<endl; 
            else if (bmonth==8 && bday>=23) 
            cout<<"Your horoscope sign is Virgo"<<endl; 
            else if (bmonth==9 && bday<=22) 
            cout<<"Your horoscope sign is Virgo"<<endl; 
            else if (bmonth==9 && bday>=23) 
            cout<<"Your horoscope sign is Libra"<<endl; 
            else if (bmonth==10 && bday<=22) 
            cout<<"Your horoscope sign is Libra"<<endl; 
            else if (bmonth==10 && bday>=23) 
            cout<<"Your horoscope sign is Scorpio"<<endl; 
            else if (bmonth==11 && bday<=21) 
            cout<<"Your horoscope sign is Scorpio"<<endl; 
            else if (bmonth==11 && bday>=22) 
            cout<<"Your horoscope sign is Sagittarius"<<endl; 
            else if (bmonth==12 && bday<=21) 
            cout<<"Your horoscope sign is Sagittarius"<<endl; 
            else if (bmonth==12 && bday>=22) 
            cout<<"Your horoscope sign is Capricorn"<<endl; 
            else if (bmonth==1 && bday<=19) 
            cout<<"Your horoscope sign is Capricorn"<<endl; 
            else if (bmonth==1 && bday>=20) 
            cout<<"Your horoscope sign is Aquarius"<<endl; 
            else if (bmonth==2 && bday<=18) 
            cout<<"Your horoscope sign is Aquarius"<<endl; 
            else if (bmonth==2 && bday>=19) 
            cout<<"Your horoscope sign is Pisces"<<endl; 
            else if (bmonth==3 && bday<=20) 
            cout<<"Your horoscope sign is Pisces"<<endl; 
         
                cout<<"Would you like to do it again? Enter y for yes or n for no.\n";  
                 char response;  
                cin>>response;  
                if (response=='y')doAgain=true;  
                else doAgain=false;  
                 }while(doAgain); 
    return 0;     
} 
