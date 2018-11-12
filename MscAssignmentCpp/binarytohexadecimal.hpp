//
//  binarytohexadecimal.hpp
//  MscAssignmentCpp
//
//  Created by Bishal Blue on 08/10/18.
//  Copyright © 2018 Bishal Blue. All rights reserved.
//

#ifndef binarytohexadecimal_hpp
#define binarytohexadecimal_hpp
#define SIZE 8
#include <iostream>
class binarytohex{
public:
    long val;
    int res[SIZE];
    char finalres[SIZE];
    void initialize();
    void bintohex(int );
};

#endif /* binarytohexadecimal_hpp */
