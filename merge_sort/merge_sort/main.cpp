//
//  main.cpp
//  merge_sort
//
//  Created by Ryan on 5/9/19.
//  Copyright © 2019 Ryan. All rights reserved.
//

#include <iostream>


int main() {
    void merge_sort(int *arr, int l, int r);
    
    int array[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(array)/sizeof(array[0]);
    
    printf("before the sort\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    merge_sort(array,0,n-1);
    printf("after the sort\n");
    for (int j=0;j<n;j++)
    {
        printf("%d ",array[j]);
    }
    return 0;
}


void merge(int *arr, int l, int m,int r)
{
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1],R[n2];
    
    for ( i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for ( j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
    }
    i=0;
    j=0;
    k=l;
    
    while(i<n1 &&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}

void merge_sort(int *arr, int l, int r)
{
    if (l<r)
    {
        int m=(l+r)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        merge(arr, l, m, r);
    }
}

