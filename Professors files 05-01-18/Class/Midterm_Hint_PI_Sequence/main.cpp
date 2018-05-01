/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on April 19th, 2018, 11:35 AM
 * Purpose:  Sequence Representing PI
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
const float PI=4*atan(1);//Definition of PI

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float apprxPI;//Approximate value of PI given # terms in sequence
    int   nTerms; //Number of terms used in sequence
    
    //Initialize Variables
    apprxPI=0;
    nTerms=10000;
    
    //Process/Map inputs to outputs
    for(int sign=-1,term=1,cntr=1;term<=nTerms;term++,cntr+=2){
        sign*=-1;
        apprxPI+=(static_cast<float>(sign)/cntr);//atan(1)
    }
    apprxPI*=4;//Approximates PI
    
    //Output data
    cout<<"After "<<nTerms
            <<" terms the Approximate Value of PI = "<<apprxPI<<endl;
    cout<<"PI = "<<PI<<endl;
    cout<<"The difference = "<<(PI-apprxPI)/PI*100<<"%"<<endl;
    
    //Exit stage right!
    return 0;
}