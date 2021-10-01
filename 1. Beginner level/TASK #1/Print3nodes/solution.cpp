#include<stdio.h>
//Write a program to create a linked list (three nodes) and print it.
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
}*first= NULL,*second=NULL,*third=NULL;
void printnode(struct Node *n){
    while(n!=NULL){
        printf("%d",n->data);
        n=n->next;
    }

}
int main(){
    int n1,n2,n3;
    first=(struct  Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct  Node*)malloc(sizeof(struct Node));
    printf("enter the data of the first node:");
    scanf("%d",&n1);
    first->data=n1;
    first->next=second;
    printf("enter the data of the second node:");
    scanf("%d",&n2);

    second->data=n2;
    second->next=third;
    printf("enter the data of the third node:");
    scanf("%d",&n3);
    third->data=n3;
    third->next=NULL;
    printnode(first);
    return 0;
}
