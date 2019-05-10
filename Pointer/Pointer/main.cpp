//
//  main.cpp
//  Pointer
//
//  Created by Ryan on 5/8/19.
//  Copyright © 2019 Ryan. All rights reserved.
//

#include <iostream>

int main() {
    // insert code here...
    char s[] ="0113256";
    
    char *p =s;
    
     printf("%c",*p++);
     printf("%c",*(p++));
     printf("%c",(*p)++);
     printf("%c",*++p);
     printf("%c",*(++p));
     printf("%c",++*p);
     printf("%c",++(*p));
    
    printf("\n");
    
    printf(s);
    return 0;
}
