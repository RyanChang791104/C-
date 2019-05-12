//
//  main.cpp
//  BST
//
//  Created by Ryan on 5/12/19.
//  Copyright © 2019 Ryan. All rights reserved.
//

#include <iostream>
#include <cmath>
struct node
{
    int key;
    struct node *Left, *Right;
};

struct node *Newnode(int key)
{
    struct node *temp = new struct node ;
    //struct node *temp = malloc(sizeof( Newnode));
    temp->key=key;
    temp->Left=temp->Right=NULL;
    return temp;
};

struct node *Insert(struct node *node, int key)
{
    if(node==NULL)
        return Newnode(key);
    else if (node->key>=key)
        node->Left = Insert(node->Left, key);
    else if (node->key<key)
        node->Right = Insert(node->Right, key);
    
    return node;
};
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->Left);
        printf("%d \n", root->key);
        inorder(root->Right);
    }
}

struct node *invert(struct node *p)
{
    if(p==NULL || (p->Left==NULL && p->Right==NULL))
        return p;
    
    struct node* temp =p->Right;
    p->Right=p->Left;
    p->Left=temp;
    
    
    invert(p->Right);
    invert(p->Left);
    
    return p;
};

int height;
int BST_height(struct node *p)
{
    if(p==NULL)
        return 0;
    else
    {
        int LH=BST_height(p->Left);
        int RH=BST_height(p->Right);
        if (LH>RH)
            return LH+1;
        else
            return RH+1;
    }
};
//static int height;
int array[] = {10,5,14,3,6,55,1,8,10,1};
int n = sizeof(array)/sizeof(array[0]);
int main(void) {

    struct node * t = NULL;
    t = Newnode(array[0]);
    for (int i =1;i<n;i++)
        Insert(t, array[i]);

    printf("before the inorder\n");
    inorder(t);
    printf("after swap the inorder\n");
    struct node * p = invert(t);
    inorder(p);
     printf("The height is %d\n",BST_height(p));
    return 0;
}




