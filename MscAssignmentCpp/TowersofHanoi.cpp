//
//  TowersofHanoi.cpp
//  MscAssignmentCpp
//
//  Created by Bishal Blue on 14/08/18.
//  Copyright © 2018 Bishal Blue. All rights reserved.
//

#include "TowersofHanoi.hpp"
using namespace std;
void towers(int n, char from, char to, char aux){
    if (n==1){
        cout<<"Move Disk 1 from "<<from<<" to "<<to<<endl;
        return;
    }
    towers(n-1, from, aux, to);
    cout<<"Move Disk"<<n<<" from "<<from<<" to "<<to<<endl;
    towers(n-1, aux, to, from);
}

int main(){
    cout<<"Enter the number of disks: ";
    int n;
    cin>>n;
    cout<<"\nThe Sequence of moves invloved are "<<endl;
    towers(n,'A', 'C', 'B');
    return 0;
}
