//
//  binarytodecimal.cpp
//  MscAssignmentCpp
//
//  Created by Bishal Blue on 01/10/18.
//  Copyright © 2018 Bishal Blue. All rights reserved.
//

#include "binarytodecimal.hpp"
#include <iostream>
#include <math.h>
#define SIZE 8
using namespace std;

void binarytodecimal::initialize(){
    for(int i=0;i<SIZE;i++){
        arr[i]=0;
    }
    val=0;
}

void binarytodecimal::calcbintodec(int n){
    num=n;
    int i=SIZE-1;
    while(n){
        int temp = n % 10;
        arr[i--] = temp;
        n = n / 10;
    }
    for(int i=SIZE-1,j=0;i>=0;i--,j++){
        val += arr[i]*int(pow(double(2), double(j)));
    }
    if (arr[0]==1){
        val-=256;
    }
    return;
}

void binarytodecimal::printbintodec(){
    cout<<"\nDecimal is "<<val<<endl;
}
