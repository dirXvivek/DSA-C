//question:1 
//wap in c to create a singly linked list of n nodes and display it in reverse order
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main(){
    struct node *head,*ptr,*temp;
    int n;
    printf("Enter the no of node: ");
    scanf("%d",&n);
    //looping till n
    for(int i=0;i<n;i++){
        temp=malloc(sizeof(struct node));
        int x;
        printf("insert the value in linked list: ");
        scanf("%d",&x);
        //condition
        if(i==0){
            temp->data=x;
            ptr = temp;
            head = ptr;
        }
        else{
            temp->data=x;
            ptr->link=temp;
            ptr = ptr->link;
        }
        
    }
    //condition for reverse movement
    for(int i=1;i<=n;i++){
        if(i==1){
            printf("%d",temp->data);
        }
        else{
            ptr=head;
            while(temp!=ptr->link){
                ptr = ptr->link;
            }
            printf("%d",ptr->data);
            temp=ptr;
        }
        
    }
    temp->link=NULL;//last node linke always
    //display data
    temp = head;
    while(temp->link!=NULL){
        printf("%d",temp->data);
        temp=temp->link;
    }
    return 0;

}