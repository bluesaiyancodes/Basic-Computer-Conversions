//
//  signedtobinary.cpp
//  MscAssignmentCpp
//
//  Created by Bishal Blue on 08/10/18.
//  Copyright © 2018 Bishal Blue. All rights reserved.
//

#include "signedtobinary.hpp"
#include "twoscompliment.hpp"
#include "decimaltobinary.hpp"
#include <iostream>

void signedtobinary::to_binary(int temp){
    if(temp<0){
        temp= temp*-1;
        twoscompliment twosc;
        twosc.calctwoscompliment(temp);
        cout<<"\nSinged binary : ";
        for(int i=0;i<SIZE;i++){
            arr[i]=twosc.comarr[i];
            cout<<arr[i];
        }
    }
    else{
        decimaltobinary dtb;
        dtb.converttobinary(temp);
        cout<<"\nSinged binary : ";
        for (int i=0;i<SIZE;i++){
            arr[i]=dtb.outarr[i];
            cout<<arr[i];
        }
    }
    cout<<endl;
}
