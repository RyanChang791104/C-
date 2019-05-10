//
//  main.cpp
//  SeqTree
//
//  Created by Ryan on 4/30/19.
//  Copyright © 2019 Ryan. All rights reserved.
//

#include <iostream>
int data[80],tree[80],p,n;
int main() {
    void SeqTree();
    int i;
    printf("build a sequence binary tree\n");
    printf("Input the amount of number");
    
    scanf("%d",&n);
    printf("Please input %d number",n);
    for (i=0;i<n;i++)
        scanf("%d",&data[i]);
    
    SeqTree();
    return 0;
}
void SeqTree()
{
    int node = 0,s,tmp;
    for (s=0;s<80;s++)
        tree[s]=0;
        tree[1]=data[0];
    tmp=n;
    for (s=1;s<n;s++)
    {
        node=1;
        while (tree[node]!=0) {
            if(data[s]<tree[node])
            {
                node=2*node;
            }
            else
            {
                node= 2*node+1;
            }
            //printf("node=%d",node);
            printf("data[s]=%d<tree[node]=%d",data[s],tree[node]);
            printf("\n");
            if(tmp<node)
            {
                p=node;
            }
        }
       tree[node]=data[s];
    }
    
    printf("The Sequence binary tree\n");
    for (s=1;s<=p;s++)
    
    {
        if(tree[s]!=0)
        {
        printf("%d ",tree[s]);
        printf("\n");
        }
    }
}

