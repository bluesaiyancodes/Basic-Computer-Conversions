//
//  hextwoscompliment.hpp
//  MscAssignmentCpp
//
//  Created by Bishal Blue on 01/10/18.
//  Copyright © 2018 Bishal Blue. All rights reserved.
//

#ifndef hextwoscompliment_hpp
#define hextwoscompliment_hpp

#include <iostream>
#include <string>
#define SIZE 8

using namespace std;

class hextocompliment{
public:
    char hex[SIZE], res[SIZE];
    int arr[SIZE],pseudo_res[SIZE],len,val;
    int comarr[SIZE], binval;
    long int comval;
    void initialize();
    void to_decimal(string);
    void to_compliment();
    void to_hex_again();
};

#endif /* hextwoscompliment_hpp */
