#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

void Insert(int x){
    Node* newEL = new Node();
    newEL->data = x;
    newEL->next = NULL;
    newEL->prev = head;
    if(head != NULL){
        newEL->next = head;
        }
    head = newEL;
}

void Print(){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    int arr[4]={1,2,3,4};
    for(int i=0; i<4; i++){
        Insert(arr[i]);
    }
    Print();
    return 0;
}
