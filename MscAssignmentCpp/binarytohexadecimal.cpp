//
//  binarytohexadecimal.cpp
//  MscAssignmentCpp
//
//  Created by Bishal Blue on 08/10/18.
//  Copyright © 2018 Bishal Blue. All rights reserved.
//

#include "binarytohexadecimal.hpp"
#include "binarytodecimal.hpp"
#include <iostream>
#define SIZE 8

void binarytohex::initialize(){
    for (int i=0;i<SIZE;i++){
        res[i]=0;
    }
}

void binarytohex::bintohex(int temp){
    binarytodecimal btd;
    btd.initialize();
    btd.calcbintodec(temp);
    val=btd.val;
    temp = val;
    int rem, i=SIZE-1;
    while(temp!=0){
        rem=temp%16;
        temp = temp/16;
        res[i--]=rem;
    }
    for(int i=0;i<SIZE;i++){
        int temp = res[i];

        switch(temp){
            default:
                finalres[i] = '0';
                break;
            case 1:
                finalres[i] = char(res[i]+48);
                break;
            case 2:
                finalres[i] = char(res[i]+48);
                break;
            case 3:
                finalres[i] = char(res[i]+48);
                break;
            case 4:
                finalres[i] = char(res[i]+48);
                break;
            case 5:
                finalres[i] = char(res[i]+48);
                break;
            case 6:
                finalres[i] = char(res[i]+48);
                break;
            case 7:
                finalres[i] = char(res[i]+48);
                break;
            case 8:
                finalres[i] = char(res[i]+48);
                break;
            case 9:
                finalres[i] = char(res[i]+48);
                break;
            case 10:
                finalres[i] = 'A';
                break;
            case 11:
                finalres[i] = 'B';
                break;
            case 12:
                finalres[i] = 'C';
                break;
            case 13:
                finalres[i] = 'D';
                break;
            case 14:
                finalres[i] = 'E';
                break;
            case 15:
                finalres[i] = 'F';
                break;
        }
    }
    
    cout<<"Hexadecimal equivalent : ";
    for(int i=0;i<SIZE;i++){
        cout<<finalres[i];
    }
    cout<<endl;
}
