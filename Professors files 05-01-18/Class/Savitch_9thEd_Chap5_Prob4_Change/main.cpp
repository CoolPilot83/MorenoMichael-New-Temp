/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on April 24th, 2018, 12:20 PM
 * Purpose:  Calculate change
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int DOLRSPN=100;//Conversion from dollars to pennies
const int PENNY=1;
const int NICKEL=5;
const int DIME=10;
const int QUARTER=25;

//Function Prototypes
int numCoin(int,int);//Calculates number of coins
int rmnder(int,int); //Remainder after subtracting coins

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float price,amtTndr;
    int pennies,n25,n10,n5,n1;
    
    //Initialize Variables
    price=9.14f;   //Price is $9.14
    amtTndr=10.00f;//Amount paid
    
    //Output initial conditions
    pennies=(amtTndr-price+0.005)*DOLRSPN;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Item price = $"<<price<<endl;
    cout<<"Amount Tendered = $"<<amtTndr<<endl;
    cout<<"Change returned = "<<pennies<<" cents"<<endl;
    
    //Calculate minimum amount of change
    n25=numCoin(pennies,QUARTER);
    pennies=rmnder(pennies,QUARTER);
    n10=numCoin(pennies,DIME);
    pennies=rmnder(pennies,DIME);
    n5=numCoin(pennies,NICKEL);
    pennies=rmnder(pennies,NICKEL);
    n1=numCoin(pennies,PENNY);
    pennies=rmnder(pennies,PENNY);
    
    //Output data
    cout<<"Number of Quarters   = "<<n25<<endl;
    cout<<"Number of Dimes      = "<<n10<<endl;
    cout<<"Number of Nickels    = "<<n5<<endl;
    cout<<"Number of Pennies    = "<<n1<<endl;
    
    
    //Exit stage right!
    return 0;
}

//Calculate the remainder
int rmnder(int pennies,int denom){
    return pennies-numCoin(pennies,denom)*denom;
}

//Calculate the number of Coins of that Denomination
int numCoin(int pennies,int denom){
    return pennies/denom;//Number of coins of that denomination
}