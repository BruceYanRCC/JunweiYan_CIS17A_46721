/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap5_Prob11_Population.cpp
 * Author: Junwei Yan
 *
 * Created on 2020年6月29日, 下午3:12
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int starting, avg_daily, days;
    cout <<"Enter starting population: ";
    cin>> starting;
    
    if(starting < 2){
        cout <<"Invalid Renter:";
        cin>> starting;
    }
    cout <<"Enter average daily population: ";
    cin >> avg_daily;
    if (avg_daily<0){
        cout<<"Invalid Renter: Please enter a positive number";
        cin>>avg_daily;
    }
    avg_daily=(avg_daily * starting) /100;
    
    cout<<"Enter number of days: ";
    cin>> days;
    for(int i=0; i<days;i++){
        starting=starting+avg_daily;
        cout <<"Day"<< i+1<<" ; "<< starting <<endl;
    }
    return 0;
}

