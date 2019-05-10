//
//  main.cpp
//  Template
//
//  Created by Ryan on 5/9/19.
//  Copyright © 2019 Ryan. All rights reserved.
//

#include <iostream>
template<typename T>
void Generic(T &a, T &b);
int main() {
 
    char a = 's';
    char b = 'c';
    int i =1;
    int j =2;
    //print_char(a,b);
    Generic(i,j);
    printf("i:%d j:%d",i,j);
    //printf("&a=%s, &b=%s\n",&a,&b);
    return 0;
}
void print_int(int &a, int &b)
{
    int temp;
    temp=b;
    b=a;
    a=temp;
}
void print_char(char &a, char &b)
{
    char temp;
    temp=b;
    b=a;
    a=temp;
}
template<typename T>
void Generic(T &a, T &b)
{
    T temp;
    temp=b;
    b=a;
    a=temp;
}
