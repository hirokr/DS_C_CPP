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


void Insert_nth(int pos, int x){
    Node* temp = new Node();
    Node* temp1 = head;
    temp->data = x;
    temp->next = NULL; 
    if(pos == 1){
        temp->next = head;
        head = temp;
        return; 
    }
    for(int i = 0; i<pos-2; i++ ){
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}

void Print(){
    Node* temp = head;
    while (temp != NULL)
    {   
        cout<< temp->data<< " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    int arr[4] = {1,2,3,4};
    for(int i = 0; i< 4; i++){
        Insert(arr[i]);
    }
    Print();
    Insert_nth(3,58);
    Insert_nth(6,1829);
    Print();
}