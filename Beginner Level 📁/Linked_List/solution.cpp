#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;
void Insert(int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

int getLength(Node* head){
    int len = 0;
    while(head){
        len ++;
        head = head->next;
    }
    return len;
}


int getMiddle(Node* head){
    
    int length = getLength(head);
    int midindex = length/2;
    while(midindex--){
        head = head->next;
    }
    return head->data;

}

void Print(){
    struct Node* temp = head;
    cout << "list is" << endl;
    while(temp != NULL){
        cout << temp->data;
        temp = temp->next;
    }
}




int main(){
    head = NULL;
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "enter the number: " << endl;
        cin >> x;
        Insert(x);
        Print();
    }
    cout <<"Middle Is: "<< getMiddle(head) << endl;
    return 0;
}