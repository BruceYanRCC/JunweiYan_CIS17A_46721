/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap3_Prob13_Currency.cpp
 * Author: Junwei Yan
 *
 * Created on 2020年6月28日, 下午9:49
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const double YEN_OER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;
    double YEN , EUROS, DOLLARS;
    
    //input the number of dollars
    cout << "Please input amount in of US dollars" << endl;
    cin >> DOLLARS;
    
    //formula
    YEN = DOLLARS * YEN_OER_DOLLAR;
    EUROS = DOLLARS * EUROS_PER_DOLLAR;
    
    //output the data
    cout << fixed << setprecision(2) << DOLLARS << " = " << YEN << " Yen."<< endl;
    cout << fixed << setprecision(2) << DOLLARS << " = " << EUROS  << " Euros."<< endl;
    return 0;
}

