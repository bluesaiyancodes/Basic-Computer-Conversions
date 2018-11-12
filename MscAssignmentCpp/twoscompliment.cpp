//
//  twoscompliment.cpp
//  MscAssignmentCpp
//
//  Created by Bishal Blue on 01/10/18.
//  Copyright © 2018 Bishal Blue. All rights reserved.
//

#include "twoscompliment.hpp"
#include "onescomplement.hpp"
#define SIZE 8

using namespace std;

void twoscompliment::calctwoscompliment(int temp){
    n=temp;
    bool flag=true;
    onecomplement onec;
    onec.calc_compliment(n);
    for(int i=0;i<SIZE;i++){
        arr1[i]=onec.arr[i];
        comarr[i]=onec.comarr[i];
    }
    for (int i=SIZE-1;i>=0;i--){
        arr[i]=onec.comarr[i];
        if(arr[i]){
            if (flag) {
                arr[i]=0;
            }
        }
        else{
            if (flag) {
                arr[i]=1;
                flag=false;
            }
        }
    }
}

void twoscompliment::printtwoscompliment(){
    cout<<"Binary - ";
    for (int i=0;i<SIZE;i++){
        cout<<arr1[i];
    }
    cout<<endl<<"Compliment - ";
    for (int i=0;i<SIZE;i++){
        cout<<comarr[i];
    }
    
    cout<<"\nTwo's compliment - ";
    for(int i=0;i<SIZE;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
