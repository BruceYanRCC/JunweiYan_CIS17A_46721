/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap6_Prob7_Kinetic Energy.cpp
 * Author: Junwei Yan
 *
 * Created on 2020年6月29日, 下午3:13
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include<iostream>

using namespace std;

double KineticEnergy(double,double);
/*
 * 
 */
int main(int argc, char** argv) {
    double mass = 0;
    double velocity = 0;
    double KE;
    KE = KineticEnergy(mass , velocity);
    
    cout <<"Kinetic Energy : "<< KE <<endl;
    
    return 0;
}
double KineticEnergy(double mass,double velocity){
    cout<< "Enter the mass of body :";
    cin >> mass;
    cout << "Enter the velocity :";
    cin >> velocity;
    double KE;
    KE = 0.5 * mass * velocity * velocity;
    return KE;
}

