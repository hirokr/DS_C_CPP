#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;

void Print(){
    Node* temp = head;
    cout << "The List: ";
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void LInsert(int x){        //creates a linked node for the linked list
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void InsertB(int x , int n){ // insearts elements in the list in the nth position
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;

    if(n ==1){
        temp->next = head;
        head = temp;
        return;
    }

    Node* temp1 = head;
    for(int i=0; i<n-2;i++){
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}

void DeleteN(int n){ // deletes the nth element in the list
    Node* temp = head;

    if(n==1){
        head = temp->next;
        return;
    }

    for(int i=0; i<n-2;i++){
        temp = temp->next;
    }
    Node* temp1 = temp->next;
    temp->next = temp1->next;
    // free(temp1); // for C
    delete temp1;
}

int main(){
    int arr[4] = {1,2,3,4};

    for(int i=0; i<4;i++){
        LInsert(arr[i]);
    }
    Print();
    DeleteN(1);
    Print();
    InsertB(41, 1);
    Print();
    return 0; 
}
