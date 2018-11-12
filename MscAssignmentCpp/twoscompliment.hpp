//
//  twoscompliment.hpp
//  MscAssignmentCpp
//
//  Created by Bishal Blue on 01/10/18.
//  Copyright © 2018 Bishal Blue. All rights reserved.
//

#ifndef twoscompliment_hpp
#define twoscompliment_hpp

#include <iostream>
#define SIZE 8


using namespace std;

class twoscompliment{
public:
    int n;
    int arr[SIZE],arr1[SIZE],comarr[SIZE];
    void calctwoscompliment(int);
    void printtwoscompliment();
};

#endif /* twoscompliment_hpp */
