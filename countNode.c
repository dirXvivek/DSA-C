//Question:2
//wap to create a singly linked list of n nodes and count the number of node
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main(){
    struct node *temp,*ptr,*head;
    int n,nodeCount=0;
    printf("Enter the no. of nodes: ");
    scanf("%d",&n);
    //creating n no. of nodes
    for(int i=0;i<n;i++){
        temp=malloc(sizeof(struct node));
        int x;
        printf("Enter the data for nodes: ");
        scanf("%d",&x);
        //conditon to insert the data
        if(i==0){
            temp->data =x;
            ptr = temp;
            head =ptr;
        }
        else{
            temp->data = x;
            ptr->link=temp;
            ptr = ptr->link;
        }
    }
    //counting the node
    temp = head;
    while(temp!=NULL){
        nodeCount++;
        temp = temp->link;
    }
    printf("Total no of nodes are: %d",nodeCount);
}