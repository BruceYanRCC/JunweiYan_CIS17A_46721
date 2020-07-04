/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gaddis_9thEd_Chap8_Prob7_Binary String Search.cpp
 * Author: Junwei Yan
 *
 * Created on 2020年6月29日, 下午3:16
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
void sortStrings(string[],int);
int binarySearch(string[],int,string);
/*
 * 
 */
int main(int argc, char** argv) {
    int results;
    string employeeName;
    const int NUM_NAMES = 20;
    
    string names[NUM_NAMES] = {"Collins", "Smith", "Allen","Griffin", "Stamey",
    "Rose","Taylor","Johnson","Allison","Looney","Wolfe","James","Weaver","Pore",
    "Rutherford","Javens","Harrison","Setzer","Pike","Glland"};
    
    cout<<"Enter employee Name you want to search:";
    cin>> employeeName;
    
    sortStrings(names,NUM_NAMES);
    
    results = binarySearch(names,NUM_NAMES,employeeName);
    if(results==-1)
        cout<<employeeName<<"name doesn't exist."<<endl;
    else
        cout<<"Element name "<< employeeName <<" found at the specified index "<<results+1<<" in the array."<<endl;
    for(int index=0;index<NUM_NAMES;index++)
        cout<<index+1<<right<<setw(10)<<names[index]<<endl;
            
    return 0;
}
void sortStrings (string names[],int size){
    int startScan;
    int minIndex;
    string minValue;
    
    for(startScan = 0;startScan<(size-1);startScan++){
        minValue=startScan;
        minValue=names[startScan];
        for(int index=startScan+1;index<size;index++){
            if(names[index].compare(minValue)<0){
                minValue=names[index];
                minIndex=index;
            }
        }
        names[minIndex]=names[startScan];
        names[startScan]=minValue;
    }
}
int binarySearch(string names[], int NUM_NAMES, string employeeName){
    int first=0,
    last= NUM_NAMES-1,
    middle,
    position =- 1;
    bool found = false;
    while(!found &&first <=last){
        middle = (first+last)/2;
        if(names[middle].compare(employeeName)==0){
            found=true;
            position=middle;
        }
        else if (names[middle].compare(employeeName)>0)
            last=middle-1;
        else
            first=middle+1;
    }
          return position;  
}