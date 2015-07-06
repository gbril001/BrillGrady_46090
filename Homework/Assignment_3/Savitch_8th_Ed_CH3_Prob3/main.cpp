/*       
 * File:   main.cpp      
 * Author: Grady Brill      
 * Purpose: Savitch 8th Ed CH3 Prob3  
 * Created on July 2, 2015, 12:55 PM      
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
    int bday;  //day you were born
    int bmonth; //Month you were born in numerical form 
      
//Output the results  
    do{  
  
cout<<"Enter the day you were born"<<endl;  
cin>>bday;  
cout<<"Enter your month of birth numerically (ex. January=1)"<<endl;  
cin>>bmonth;  
 
            if ((bmonth==3) && (bday>=21)){  
                cout<<"Your horoscope sign is Aries"<<endl;  
                if (bday==21 ||22)
                cout<<"Your birthday is on the cusp of being a Pisces"<<endl;}
            else if ((bmonth==4) && (bday<=19)){  
                cout<<"Your horoscope sign is Aries"<<endl;  
                if (bday==18||19)
                cout<<"Your birthday is on the cusp of being a Taurus"<<endl;}
            else if ((bmonth==4) && (bday>=20)){  
                cout<<"Your horoscope sign is Taurus"<<endl; 
                if (bday==20||21)
                cout<<"Your birthday is on the cusp of being a Aries"<<endl;}
            else if (bmonth==5 && bday<=20){  
                cout<<"Your horoscope sign is Taurus"<<endl; 
                if (bday==20||19)
                cout<<"Your birthday is on the cusp of being a Gemini"<<endl;}
            else if (bmonth==5 && bday>=21){  
                cout<<"Your horoscope sign is Gemini"<<endl;  
                if (bday==21||22)
                cout<<"Your birthday is on the cusp of being a  Taurus"<<endl;}
            else if (bmonth==6 && bday<=21) { 
                cout<<"Your horoscope sign is Gemini"<<endl;  
                if (bday==20||21)
                cout<<"Your birthday is on the cusp of being a Cancer"<<endl;}
            else if (bmonth==6 && bday>=22)  {
                cout<<"Your horoscope sign is Cancer"<<endl;
                if (bday==22||23)
                cout<<"Your birthday is on the cusp of being a Gemini"<<endl;}
            else if (bmonth==7 && bday<=22)  {
                cout<<"Your horoscope sign is Cancer"<<endl;  
                if (bday==21||22)
                cout<<"Your birthday is on the cusp of being a Leo"<<endl;}
            else if (bmonth==7 && bday>=23)  {
                cout<<"Your horoscope sign is Leo"<<endl; 
                if (bday==23||24)
                cout<<"Your birthday is on the cusp of being a Cancer"<<endl;}
            else if (bmonth==8 && bday<=22)  {
                cout<<"Your horoscope sign is Leo"<<endl;  
                if (bday==22||21)
                cout<<"Your birthday is on the cusp of being a Virgo"<<endl;}
            else if (bmonth==8 && bday>=23)  {
                cout<<"Your horoscope sign is Virgo"<<endl; 
                if (bday==23||24)
                cout<<"Your birthday is on the cusp of being a Leo"<<endl;}
            else if (bmonth==9 && bday<=22)  {
                cout<<"Your horoscope sign is Virgo"<<endl;
                if (bday==22||21)
                cout<<"Your birthday is on the cusp of being a Libra"<<endl;}
            else if (bmonth==9 && bday>=23)  {
                cout<<"Your horoscope sign is Libra"<<endl;
                if (bday==23||24)
                cout<<"Your birthday is on the cusp of being a Virgo"<<endl;}
            else if (bmonth==10 && bday<=22)  {
                cout<<"Your horoscope sign is Libra"<<endl; 
                if (bday==22||21)
                cout<<"Your birthday is on the cusp of being a Scorpio"<<endl;}
            else if (bmonth==10 && bday>=23)  {
                cout<<"Your horoscope sign is Scorpio"<<endl;  
                if (bday==23||24)
                cout<<"Your birthday is on the cusp of being a Libra"<<endl;}
            else if (bmonth==11 && bday<=21) { 
                cout<<"Your horoscope sign is Scorpio"<<endl;  
                if (bday==21||20)
                cout<<"Your birthday is on the cusp of being a Sagittarius"<<endl;}
            else if (bmonth==11 && bday>=22) { 
                cout<<"Your horoscope sign is Sagittarius"<<endl;
                if (bday==22||23)
                cout<<"Your birthday is on the cusp of being a Scorpio"<<endl;}
            else if (bmonth==12 && bday<=21)  {
                cout<<"Your horoscope sign is Sagittarius"<<endl;  
                if (bday==21||20)
                cout<<"Your birthday is on the cusp of being a Capricorn"<<endl;}
            else if (bmonth==12 && bday>=22)  {
                cout<<"Your horoscope sign is Capricorn"<<endl; 
                if (bday==22||23)
                cout<<"Your birthday is on the cusp of being a Sagittarius"<<endl;}
            else if (bmonth==1 && bday<=19)  {
                cout<<"Your horoscope sign is Capricorn"<<endl;  
                if (bday==20||19)
                cout<<"Your birthday is on the cusp of being a Aquarius"<<endl;}
            else if (bmonth==1 && bday>=20)  {
                cout<<"Your horoscope sign is Aquarius"<<endl;  
                if (bday==20||21)
                cout<<"Your birthday is on the cusp of being a Capricorn"<<endl;}
            else if (bmonth==2 && bday<=18)  {
                cout<<"Your horoscope sign is Aquarius"<<endl;  
                if (bday==18||17)
                cout<<"Your birthday is on the cusp of being a Pisces"<<endl;}
            else if (bmonth==2 && bday>=19)  {
                cout<<"Your horoscope sign is Pisces"<<endl;  
                if (bday==20||19)
                cout<<"Your birthday is on the cusp of being a Aquarius"<<endl;}
            else if (bmonth==3 && bday<=20)  {
                cout<<"Your horoscope sign is Pisces"<<endl;  
                if (bday==20||19)
                cout<<"Your birthday is on the cusp of being a Aries"<<endl;}
          
           cout<<"Would you like to do it again? Enter y for yes or n for no.\n";   
           char response;   
           cin>>response;   
           if (response=='y')doAgain=true;   
           else doAgain=false;   
           }while(doAgain);  
    return 0;      
}

