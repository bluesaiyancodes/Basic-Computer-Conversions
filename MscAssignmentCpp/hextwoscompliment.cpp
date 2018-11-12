//
//  hextwoscompliment.cpp
//  MscAssignmentCpp
//
//  Created by Bishal Blue on 01/10/18.
//  Copyright © 2018 Bishal Blue. All rights reserved.
//

#include "hextwoscompliment.hpp"
#include "twoscompliment.hpp"
#include "binarytodecimal.hpp"
#include <string>



using namespace std;

void hextocompliment::initialize(){
    for (int i=0;i<SIZE;i++){
        arr[i]=0;
        comarr[i]=0;
        pseudo_res[i]=15;
        if (i==SIZE-1){
            pseudo_res[i]=16;
        }
    }
    val=0;
    comval=0;
    binval=0;
}

void hextocompliment::to_decimal(string nhex){
    len=int(nhex.length());
    for(int i=len,j=SIZE;i>=0;i--,j--){
        hex[j]=nhex[i];
    }
    for(int i=0;i<SIZE;i++){
        if(int(hex[i])>47 && int(hex[i])<58){
            int temp=int(hex[i]);
            switch(temp){
                default:
                    cout<<"\nBad Input. Exiting..."<<endl;
                    exit(1);
                case 48:
                    arr[i] = 0;
                    break;
                case 49:
                    arr[i] = 1;
                    break;
                case 50:
                    arr[i] = 2;
                    break;
                case 51:
                    arr[i] = 3;
                    break;
                case 52:
                    arr[i] = 4;
                    break;
                case 53:
                    arr[i] = 5;
                    break;
                case 54:
                    arr[i] = 6;
                    break;
                case 55:
                    arr[i] = 7;
                    break;
                case 56:
                    arr[i] = 8;
                    break;
                case 57:
                    arr[i] = 9;
                    break;
            }
        }
        if(int(hex[i])>64 && int(hex[i])<71){
            char temp = hex[i];
            switch(temp){
                default:
                    cout<<"\nBad Input. Exiting..."<<endl;
                    exit(1);
                case 'A':
                    arr[i] = 10;
                    break;
                case 'B':
                    arr[i] = 11;
                    break;
                case 'C':
                    arr[i] = 12;
                    break;
                case 'D':
                    arr[i] = 13;
                    break;
                case 'E':
                    arr[i] = 14;
                    break;
                case 'F':
                    arr[i] = 15;
                    break;
            }
        }
    }
    val = arr[0];
    for(int i=0;i<SIZE-1;i++){
        val=val*16+arr[i+1];
    }
   // cout<<"\n"<<val<<endl;
}

void hextocompliment::to_compliment(){
    twoscompliment twosc;
    twosc.calctwoscompliment(val);
    for(int i=0;i<SIZE;i++){
        comarr[i]=twosc.arr[i];
    }
    for(int i=0;i<SIZE;i++){
        binval=binval*10+comarr[i];
    }
    binarytodecimal bintodec;
    bintodec.initialize();
    bintodec.calcbintodec(binval);
    comval = bintodec.val;
   // cout<<comval;
}

void hextocompliment::to_hex_again(){
    int temp = val;
    int rem, i=SIZE-1;
    while(temp!=0){
        rem=temp%16;
        temp = temp/16;
        pseudo_res[i]-=rem;
        i--;
    }
    
    for(int i=0;i<SIZE;i++){
        int temp = pseudo_res[i];
        switch(temp){
            default:
                res[i] = char(pseudo_res[i]+48);
                break;
            case 10:
                res[i] = 'A';
                break;
            case 11:
                res[i] = 'B';
                break;
            case 12:
                res[i] = 'C';
                break;
            case 13:
                res[i] = 'D';
                break;
            case 14:
                res[i] = 'E';
                break;
            case 15:
                res[i] = 'F';
                break;
        }
    }
    cout<<"2's Compliment of hexadecimal is: ";
    
    for(int i=0;i<SIZE;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}






