/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap3_Prob12_Celsius to Fahrenheit.cpp
 * Author: Junwei Yan
 *
 * Created on 2020年6月28日, 下午9:07
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float C;
    float F;
    // input the Celsius
    cout<< "Please input the Celsius."<< endl;
    cin >> C;
    //formula
    F = 32 + (9 * C) / 5;
    //output the Fahrenheit
    cout<< C << " Celsius temperature to Fahrenheit temperature is "<< F << "."<<endl;
    return 0;
}

