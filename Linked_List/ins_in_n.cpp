#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;

void InsertN(int new_data, int n ){
    
    Node* temp = new Node();
    temp->data = new_data;
    temp->next = NULL;

    if(n == 1){
        temp->next = head;
        head = temp;
        return; 
    }

    Node* temp1 = head;

    for(int i = 0; i<n-2;i++){
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;                           

}

void Print(){
    Node* temp = head;
        cout <<':'<<endl;
        while( temp != NULL){
            cout << temp -> data;
            temp = temp ->next; 
        }
}

int main(){

    InsertN(2,1);
    Print();
    InsertN(3,2);
    Print();
    InsertN(5,1);
    Print();
    InsertN(7,3);
    Print();
    
    return 0;
}