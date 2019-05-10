//
//  main.cpp
//  Quick_sort
//
//  Created by Ryan on 5/9/19.
//  Copyright © 2019 Ryan. All rights reserved.
//

#include <iostream>

int main() {
    int array[] = {12, 11, 13, 5, 6, 7,111,677,523};
    int n = sizeof(array)/sizeof(array[0]);
    void quick_sort (int * arr, int low,int high);
    printf("before the sort\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    quick_sort(array,0,n-1);
    printf("after the sort\n");
    for (int j=0;j<n;j++)
    {
        printf("%d ",array[j]);
    }
    return 0;

}
int pivot,i;
int partition(int *arr, int low,int high)
{
    void swap(int *i,int *j);
    pivot= arr[high];
    i= low-1;
    for (int j=low;j<high;j++)
    {
        if (pivot>=arr[j])
        {
            ++i;
            swap(&arr[j],&arr[i]);
        }
    }
    swap(&arr[high],&arr[i+1]);
   return (i+1);
}
int pi;
void quick_sort (int * arr, int low,int high)
{
    if (high>low)
    {
        pi = partition(arr,low ,high);
        quick_sort(arr,low, pi-1);
        quick_sort(arr, pi+1, high);
    }
    
}
void swap(int *i,int *j)
{
    int temp=*j;
    *j=*i;
    *i=temp;
}
