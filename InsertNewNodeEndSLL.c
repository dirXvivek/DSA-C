//Question:4
// Write a program in C to insert a new node at the end of a Singly Linked List
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

//main
int main(){
    struct node *ptr,*head,*temp;
    int n;
    printf("Enter the total number of node: ");
    scanf("%d",&n);
    //creating node
    for(int i=0;i<n;i++){
        temp=malloc(sizeof(struct node));
        int x;
        printf("Enter the data in node: ");
        scanf("%d",&x);
        //inserting data
        if(i==0){
            temp->data = x;
            ptr = temp;
            head = ptr;
        }
        else{
            temp->data=x;
            ptr->link=temp;
            ptr = ptr->link;
        }
    }
    //adding node at the end of SLL
    for(int i=0;i<1;i++){
        temp=malloc(sizeof(struct node));
        ptr->link=temp;
        int x;
        printf("Enter the data in new node: ");
        scanf("%d",&x);
        temp->data = x;
    }
    //display data
    ptr = head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->link;
    }
}