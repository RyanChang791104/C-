//
//  main.cpp
//  Virtual function
//
//  Created by Ryan on 5/7/19.
//  Copyright © 2019 Ryan. All rights reserved.
//

#include <iostream>
class B
{
public:
    void function1()
    {
        printf("B1\n");
    };
    virtual void function2()
    {
        printf("B2\n");
    };
};
class derived:public B
{
    void function1()
    {
        printf("derived_1\n");
    }
    void function2()
    {
        printf("derived_2\n");
    }
};

int main() {
    B b;
    derived derived_;
    B * p;
    printf("please select the Choice");
    if(getchar()=='C')
        p=&derived_;
    else
        p=&b;
    p->function1();
    p->function2();
    return 0;
}
