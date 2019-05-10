//
//  main.cpp
//  Prime Number
//
//  Created by Ryan on 5/7/19.
//  Copyright © 2019 Ryan. All rights reserved.
//

#include <iostream>

int main() {
    bool isprime(int j);
    void print_prime(int j);
    int i;
    printf("Please input the number, the prime number will under this will print out\n");
    scanf("%d",&i);
    //printf("the number %d is prime number %d\n",i, isprime(i));
    print_prime(i);
    return 0;
}
bool isprime(int j)
{
    bool isp=true;
    if(j==0 || j==1)
        return false;
    for (int k=2;k<j;k++)
    {
        if(j%k==0)
            isp=false;
    }
    return isp;
}
void print_prime(int j)
{
    int number;
    for(int i=2;i<j;i++)
    {
    if(isprime(i)==true)
    {
        printf("%d is prime number\n",i);
    }
    }
}
