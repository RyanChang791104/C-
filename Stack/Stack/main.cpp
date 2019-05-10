//
//  main.cpp
//  Stack
//
//  Created by Ryan on 4/30/19.
//  Copyright © 2019 Ryan. All rights reserved.
//

#include <iostream>
#define MAX 4

struct stack
{
    char item[MAX];
    int top;
}*str;

void add(char ch)
{
    if (str->top==(MAX))
    {
     printf("the stack is full\n");
        exit(1);
    }
     else
     {
         (str->top)++;
         str->item[str->top]=ch;
     }
}

char delete_()
{
    if(str->top==-1)
    {
        printf("the stack is empty");
        exit(1);
    }
    else
    {
        (str->top)--;
        return (str->item[str->top]);
    }
}



int main() {
    int i;
    str=(struct stack*)malloc(sizeof(struct stack));
    add('A');
    add('B');
    delete_();
    add('C');
    add('D');
    
    for(i= str->top;i>0;i--)
    {
        printf("str->item[%d]=%c\n",i,str->item[i]);
    }
    
    return 0;
}
