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
    cout << "List Is: ";
    while (temp != NULL)
    {
        cout<< temp->data<<' ';
        temp = temp->next;
    }
    cout<< endl;
}

void Reverse(){
    Node* current = head;
    Node* next;
    Node* prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    
}

int main(){
    int arr[] = {1,2,3,4};
    for(int i =0; i<4; i++){
        Insert(arr[i]);
    }
    Print();
    Reverse();
    Print();
    return 0;
}