/* 
 * File:   main.cpp
 * Author: Michael Moreno
 * Created on May 1, 2018, 11:30 AM
 * Purpose:  Problem 7
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
unsigned char cnvDay(string);
unsigned char cnvMnth(string);
bool isLyYr(unsigned short)
char gtCntVl(unsigned int);
char gtYrVal(unsigned int);


//Execution Begins Here!
int main(int argc, char** argv) {
 //Declare Variables
    string sMonth, sDay;
    unsigned short year;
    unsigned char day, month;
    
//Initial Variables    
    cout<<"This program outputs the day of the week"<<endl;
    cout<<"given the date"<<endl;
    cout<<"Input the date i.e. July 4, 2008"<<endl;
    cin>>sMonth>>sDay>>year;
    
//Map/Process
    day=cnvDay(sDay);
    month=cnvMnth(sMonth);
    int cntLpYr=0;
    for(int year=1600; year<=2000;year++){
        cout<<year<<" "<<(isLyYr(year)?'T':'F')<<endl;
        if(isLpYr(year))cntLpYr++;
    }
    cout<<"Number of Leap Yrs = "<<cntLpYr
//Output
    cout<<"The date is "<<static_cast<int>(month)<<"/"
            <<static_cast<int>(day)<<"/"<<year<<endl;


    return 0;
}
char gtYrVal(unsigned int year){
    return year%100+(year%100)/4;
}


bool isLyYr(unsigned short year){    
    return((year%400==0)||((year%4==0)&&(!(year%100==0))));
}


unsigned char cnvDay(string sMonth){
    if(sMonth=="January")  return 1; 
    if(sMonth=="February") return 2; 
    if(sMonth=="March")    return 3; 
    if(sMonth=="April")    return 4; 
    if(sMonth=="May")      return 5; 
    if(sMonth=="June")     return 6; 
    if(sMonth=="July")     return 7; 
    if(sMonth=="August")   return 8; 
    if(sMonth=="September")return 9; 
    if(sMonth=="October")  return 10; 
    if(sMonth=="November") return 11;  
    if(sMonth=="December") return 12; 
}

    
unsigned char cnvDay(string sDay){
    char day=sDay[0]-48;
    if(sDay[1]==',')return day;
    day*=10;
    day+=sDay[1]-48;
    return day;
}