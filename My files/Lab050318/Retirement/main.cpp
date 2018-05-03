/* 
 * File:   main.cpp
 * Author: Michael D Moreno
 * Created on May 3, 2018, 11:22 AM
 * Purpose:  Retirement Calculation
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    //Salary in $/Year, Return on Investment in %,
    float salary, roi, savReq, percDep;
    
    int nYears, year;
    float svBegYr, inEndYr, dpEndYr;
    
    //Input or initialize values Here
    salary=1.e5f;
    roi=5e-2;
    savReq=salary/roi;
    percDep=1e-1f;
    nYears=50;
    svBegYr=0;
    inEndYr=0;
    dpEndYr=percDep*salary;
    
    //Process/Calculations Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year | Year  |  Savings   |   Interest | Deposit"<<endl;
    for(int nYear=0, year=2021;nYear<nYears&&savReq>svBegYr;nYear++, year++){
        cout<<setw(2)<<nYear
                <<setw(9)<<year
                <<setw(12)<<svBegYr
                <<setw(12)<<inEndYr
                <<setw(14)<<dpEndYr<<endl;
        svBegYr=svBegYr+inEndYr+dpEndYr;
        inEndYr=svBegYr*roi;
    }
    
    
    
   cout<<"Savings to Retire "<<svBegYr
           <<" in year "<<year<<endl;

        
        
        
        //Output Located Here


    //Exit
    return 0;
}

