// Question:3
// Write a program in C to insert a new node at the beginning of a Singly Linked List.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head,*temp,*ptr;
    int n;
    printf("Enter the total number of nodes: ");
    scanf("%d",&n);

    //creating nodes
    for(int i=0;i<n;i++){
        temp=malloc(sizeof(struct node));
        int x;
        printf("Enter the data: ");
        scanf("%d",&x);

        if(i==0){
            temp->data=x;
            ptr = temp;
            head=ptr;
        }
        else{
            temp->data=x;
            ptr->link= temp;
            ptr= ptr->link;
        }
    }
    //adding the new node at the beginning 
    for(int i=0;i<1;i++){
        temp = malloc(sizeof(struct node));
        temp->link=head;
        int x;
        printf("Enter the data in new node: ");
        scanf("%d",&x);
        temp->data=x;
    }

    //display the data
    ptr= temp;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->link;
    }
}