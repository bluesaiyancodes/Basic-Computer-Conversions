//
//  onescomplement.cpp
//  MscAssignmentCpp
//
//  Created by Bishal Blue on 01/10/18.
//  Copyright © 2018 Bishal Blue. All rights reserved.
//

#include "onescomplement.hpp"
#include "decimaltobinary.hpp"
#define SIZE 8

using namespace std;

void onecomplement::calc_compliment(int temp){
    n=temp;
    decimaltobinary dtb;
    dtb.converttobinary(n);
    for(int i=0;i<SIZE;i++){
        arr[i]=dtb.outarr[i];
    }
    
    for(int i=0;i<SIZE;i++){
        if(arr[i]){
            comarr[i]=0;
        }
        else{
            comarr[i]=1;
        }
    }
}

void onecomplement::printcompliment(){
    cout<<"Binary - ";
    for (int i=0;i<SIZE;i++){
        cout<<arr[i];
    }
    cout<<endl<<"Compliment - ";
    for (int i=0;i<SIZE;i++){
        cout<<comarr[i];
    }
    cout<<endl;
}
