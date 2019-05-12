//
//  main.cpp
//  bit_convert
//
//  Created by Ryan on 5/7/19.
//  Copyright © 2019 Ryan. All rights reserved.
//
#include <cmath>
#include <iostream>
int array[8];
int main() {
    void DECtobit(int i);
    int bittoDEC(int i);
    int i;
    printf("Please input DEC number\n");
    scanf("%d",&i);
    DECtobit(i);
    printf("Bit to DEC is:%d \n",bittoDEC(i));
    return 0;
}
void DECtobit(int i)
{
    int j=0;
    while(i!=0)
    {
    printf("%d",i%2);
        array[j]=i%2;
        i/=2;
        j++;
    }
    printf("DEC to Bits is: \n");
    for (int i=j-1;i>=0;i--)
    {
         printf("%d",array[i]);
    }
    printf("\n");
}

int bittoDEC(int i)
{
    int reminder,j=0, result=0;
    while(i!=0)
    {
        reminder=i%10;
        result +=reminder*pow(2, j);
        i/=10;
        j++;
    }
    return result;
}
