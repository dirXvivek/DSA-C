// Question:3
// Write a program in C to insert a new node at the beginning of a Singly Linked List.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head,*ptr1,*ptr2,*ptr3,*temp,*ptr;
    //creating nodes
    head=malloc(sizeof(struct node));
    ptr1 = malloc(sizeof(struct node));
    ptr2 =malloc(sizeof(struct node));
    ptr3=malloc(sizeof(struct node));

    //data refrencing to node
    head->data=10;
    ptr1->data=20;
    ptr2->data=30;
    ptr3->data=40;
    
    //link refrencing to node
    head->link=ptr1;
    ptr1->link=ptr2;
    ptr2->link=ptr3;
    ptr3->link=NULL;
    
    //insert new node at beginning
    temp=malloc(sizeof(struct node));
    temp->link=head;
    temp->data = 50;

    //display the data
    ptr = temp;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr = ptr->link;
    }
}