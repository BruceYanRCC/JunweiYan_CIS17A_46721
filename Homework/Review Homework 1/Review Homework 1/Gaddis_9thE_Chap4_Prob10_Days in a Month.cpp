/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thE_Chap4_Prob10_Days in a Month.cpp
 * Author: daysk
 *
 * Created on 2020年6月28日, 下午9:53
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int year, month;
    
    //input the month
    cout << "Please enter a month(1 to 12)."<< endl;
    cin >> month;
    if(month <1 || month > 12){
        cout << "Error,Invalid month entered."<< endl;
        return 0;
    }
    //input the year and output days
    cout << "Please enter a year"<< endl;
    cin >> year;
    if(year<0){
        cout << "Error,year must greater than 0."<< endl;
        return 0;
    }
    switch(month){
        case 1:case 3: case 5: case 7: case 8 :case 10: case 12:
            cout<<"31 days"<<endl;
            break;
        case 4 :case 6: case 9: case 11:
            cout <<"30 days"<< endl;
            break;
        case 2:
            if(year%100==0 && year%400==0)
                cout<<"29days"<<endl;
            else if(year%100==0)
                cout<<"28days"<<endl;
            else if(year%4==0)
                cout <<"29days"<<endl;
            else
                cout<<"28days"<<endl;
    }
    return 0;
}

