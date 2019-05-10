//
//  main.cpp
//  Insertion_sort
//
//  Created by Ryan on 5/8/19.
//  Copyright © 2019 Ryan. All rights reserved.
//

#include <iostream>
int array[] = {10,5,4,25,30,13,2,4};
int n = sizeof(array)/sizeof(array[0]);
int main() {
   
    void Insertion_sort(int *array);
    
    printf("before sorted array: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    Insertion_sort(array);
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
void Insertion_sort(int *array)
{
    int i,j,key;
    for (i=1;i<n;i++)
    {
        key=array[i];
        j=i-1;
        while (j>=0)
        {
            if(key<array[j])
                swap(&array[j], &array[j+1]);
            j--;
        }
        
    }
    
}
