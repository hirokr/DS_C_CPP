#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;

void Insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    if(head == NULL){
        temp->prev = NULL;    
    }
    else{
        Node* temp1 = temp->next;
        temp1->prev = temp;
    }
    head = temp;
}

void Print(){
    Node* temp = head;
    while (temp->next != NULL)
    {
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<< temp->data<<" ";
    cout<<endl;
    Node* temp1 = temp;
    while (temp1 != NULL)
    {
        cout<< temp1->data <<" ";
        temp1 = temp1->prev;
    }
}

int main(){
    int arr[] = {1,2,3,4};
    for(int i = 0; i<4; i++){
        Insert(arr[i]);
    }
    Print();
}