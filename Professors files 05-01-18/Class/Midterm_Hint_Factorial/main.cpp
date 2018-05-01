/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on April 19th, 2018, 11:30 AM
 * Purpose:  Calculate a Factorial
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,fctrl;
    
    //Initialize Variables
    fctrl=1;
    n=6;
    
    //Process/Map inputs to outputs
    for(int i=1;i<=n;i++){
        fctrl*=i;
    }
    
    //Output data
    cout<<n<<"! = "<<fctrl<<endl;
    
    //Exit stage right!
    return 0;
}