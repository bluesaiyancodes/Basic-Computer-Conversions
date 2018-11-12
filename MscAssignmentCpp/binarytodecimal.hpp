//
//  binarytodecimal.hpp
//  MscAssignmentCpp
//
//  Created by Bishal Blue on 01/10/18.
//  Copyright © 2018 Bishal Blue. All rights reserved.
//

#ifndef binarytodecimal_hpp
#define binarytodecimal_hpp

#include <iostream>
#define SIZE 8
using namespace std;

class binarytodecimal{
public:
    int num;
    long val;
    int arr[SIZE];
    void initialize();
    void calcbintodec(int);
    void printbintodec();
};

#endif /* binarytodecimal_hpp */
