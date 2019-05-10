//
//  main.cpp
//  Bubble sort
//
//  Created by Ryan on 5/8/19.
//  Copyright © 2019 Ryan. All rights reserved.
//

#include <iostream>

int array[] = {10,5,7,15,81,55,34,22};
int n = sizeof(array)/sizeof(array[0]);

int main() {
    void bubble_sort(int *array);
    
    printf("before sorted array: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
     printf("\n");
    bubble_sort(array);
    printf("after sorted array: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}

void swap(int *i, int *j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
}
void bubble_sort(int *array)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (array[j]>array[j+1])
            {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}
