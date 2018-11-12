//
//  main.cpp
//  MscAssignmentCpp
//
//  Created by Bishal Blue on 14/08/18.
//  Copyright © 2018 Bishal Blue. All rights reserved.
//

#include "decimaltobinary.hpp"
#include "onescomplement.hpp"
#include "twoscompliment.hpp"
#include "binarytodecimal.hpp"
#include "hextwoscompliment.hpp"
#include "signedtobinary.hpp"
#include "binarytohexadecimal.hpp"
#include <string>

using namespace std;

int main(){
    cout<<"\nChoice:"<<endl;
    cout<<"1: Decimal to Binary Conversion"<<endl;
    cout<<"2: Binary to Decimal Conversion"<<endl;
    cout<<"3: 1's Compliment"<<endl;
    cout<<"4: 2's Compliment"<<endl;
    cout<<"5: 2's Compliment of hexadecimal"<<endl;
    cout<<"6: Signed to Binary Conversion"<<endl;
    cout<<"7: Binary to Hexadecimal"<<endl;
    int choice;
    cout<<"Enter Choice: ";
    cin>>choice;
    string num;
    switch(choice){
        default:
            cout<<"\Error Input"<<endl;
            break;
        case 1:
            cout<<"Enter decimal number: ";
            int number;
            cin>>number;
            decimaltobinary dtb;
            dtb.converttobinary(number);
            dtb.printbinary();
            break;
        case 2:
            cout<<"Enter binary number: ";
            cin>>number;
            binarytodecimal bintodec;
            bintodec.initialize();
            bintodec.calcbintodec(number);
            bintodec.printbintodec();
            break;
        case 3:
            cout<<"Enter decimal number: ";
            cin>>number;
            onecomplement onec;
            onec.calc_compliment(number);
            onec.printcompliment();
            break;
        case 4:
            cout<<"Enter decimal number: ";
            cin>>number;
            twoscompliment twosc;
            twosc.calctwoscompliment(number);
            twosc.printtwoscompliment();
            break;
        case 5:
            cout<<"Enter Hexa-decimal number: ";
            cin>>num;
            hextocompliment hexc;
            hexc.initialize();
            hexc.to_decimal(num);
            hexc.to_compliment();
            hexc.to_hex_again();
            break;
        case 6:
            cout<<"Enter a signed decimal number: ";
            cin>>number;
            signedtobinary stb;
            stb.to_binary(number);
            break;
        case 7:
            cout<<"Enter binary number: ";
            cin>>number;
            binarytohex btx;
            btx.bintohex(number);
            break;
    }
}
