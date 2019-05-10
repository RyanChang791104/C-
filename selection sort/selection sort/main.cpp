//
//  main.cpp
//  selection sort
//
//  Created by Ryan on 5/8/19.
//  Copyright © 2019 Ryan. All rights reserved.
//

#include <iostream>


int array[] = {10,5,20,15,25,30,33,14};
int n = sizeof(array)/sizeof(array[0]);
int main() {
    void selection_sort(int *array);
    printf("before sorted array:");
    for (int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
     printf("\n");
    selection_sort(array);
    printf("after sorted array:");
    for (int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
void swap(int *i,int *j)
{
    int tmp = *i;
    *i= *j;
    *j= tmp;
}
void selection_sort(int *array)
{
    for (int i=0;i<n-1;i++)
    {
        int min=i;
        for (int j=i+1;j<n;j++)
            if(array[min]>array[j])
            {
        min=j;
        swap(&array[i], &array[min]);
            }
    }
}
