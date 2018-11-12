//
//  decimaltobinary.cpp
//  MscAssignmentCpp
//
//  Created by Bishal Blue on 01/10/18.
//  Copyright © 2018 Bishal Blue. All rights reserved.
//

#include "decimaltobinary.hpp"
#include <iostream>
#define SIZE 8

using namespace std;

void decimaltobinary::converttobinary(int temp){
    int a[SIZE];
    string arr="";
    static int i;
    for(int j=0;j<SIZE;j++){
        a[j]=0;
    }
    while (temp!=0) {
        if(temp%2==0){
            a[i]=0;
            i++;
            temp/=2;
        }
        else{
            a[i]=1;
            i++;
            temp/=2;
        }
    }
    for (int j=SIZE-1, i=0; j>=0; j--,i++) {
        outarr[i] = a[j];
    }
    cout<<endl;
}
void decimaltobinary::printbinary(){
    cout<<"The number in binary is : ";
    for(int i=0;i<SIZE;i++){
        cout<<outarr[i];
    }
    cout<<endl;
}
