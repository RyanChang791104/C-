//
//  main.cpp
//  Teast
//
//  Created by Ryan on 5/7/19.
//  Copyright © 2019 Ryan. All rights reserved.
//

#include <iostream>

int main() {
    // insert code here...
   int GCD(int i,int j);
    int LCM (int i,int j,int GCD_);
    printf("Please input two Integer!\n") ;
    int i,j;
    scanf("%d %d",&i,&j);
    printf("GCD=%d\n",GCD(i,j));
    printf("LCM=%d\n",LCM(i,j,GCD(i,j)));
    return 0;
}
int GCD(int i,int j)
{
    int temp;
    while(j!=0)
    {
        temp= j;
        j=i%j;
        i=temp;
    }
    return (temp);
    
}
int LCM(int i,int j, int GCD)
{
    
    return (i*j)/GCD;
}
