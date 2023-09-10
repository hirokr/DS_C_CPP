#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next; 
};

Node* head = NULL;

void Insert( int n){
    Node* temp = new Node();
    temp->data = n; 
    temp->next = head; 
    head = temp;
}

void Reverse(){
    Node* temp = head;
    // cout<<head->next<<" "<<temp<<endl;
    // cout<<temp->data<<endl;
    Node* prev = NULL;
    int  x = 0;
    while (true)
    {
        x++;
        if(x ==5) break;
        if(temp == NULL){
            head = temp;
            break;
        }
        // cout<<temp<<" "<<temp->next<<" "<<prev<<endl;
        temp = temp->next;

        
        // cout<<temp<<" "<<temp->next<<" "<<prev<<endl;
        // cout<<head<<endl;
    }
    
}

void Print(){
    Node* temp = head;
    cout<<"The List: ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){

    int arr[4] = {1,2,3,4};

    for(int i = 0; i<4; i++){
        Insert(arr[i]);
    }

    Reverse();
    Print();

    return 0;
}