#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;

void Insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Print(){
    Node* temp = head;
    while (temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next;;
    }
    cout<<endl;
}

void Delete(int pos){
    Node* temp = head;
    Node* temp1 = temp->next;
    for(int i = 0; i<pos-2; i++){
        temp = temp->next;
        temp1 = temp->next;
    }
    temp->next = temp1->next;
    free(temp1);
}

int main(){
    int arr[4] = {1,2,3,4};
    for(int i = 0; i< 4; i++){
        Insert(arr[i]);
    }
    Print();
    Delete(2);
    Print();
}