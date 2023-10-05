#include <iostream>
using namespace std;

struct Node{
  int data;
  int ocur = 1;
  Node* next;
};

Node* head = NULL;

bool Check(int x){
    Node* temp = head;
    while(temp != NULL){
        if (temp->data == x ) {
            return true;
        };
        temp = temp->next;
    }
    return false;
}

void Insert(int x){
    bool a = Check(x);
    if (a){
        Node* temp = head;
        while(temp != NULL){
            if(temp->data == x){
                temp->ocur++;
                return;
            }
            temp = temp->next;
        }
    }
    else{
        Node* temp = new Node();
        temp -> data = x;
        temp -> next = head;
        head = temp;
    }
}

void Print(){
    Node* temp = head;
    while(temp != NULL){
        cout<<"("<<temp->data << " "<< temp-> ocur<< ") ";
        temp = temp -> next;
    }
}

bool salami(){
    bool loss = true;
    int curr = 0;
    int prev = 0;
    Node* temp = head;
    while(temp != NULL){
        curr = temp -> ocur;
        if(curr == prev){
            loss = true;
        }
        else if((temp->ocur > 1) && (prev != curr)){
            loss = false;
            prev = curr;
        }
        temp = temp -> next;
    }
    return loss;
}

int main() {
     arr[11] = {4,5,6,6,4,3,6,4};
    for(int i = 0; i < 8 ; i++){
        Insert(arr[i]);
    }
    
    Print();
    cout<< "\n"<<salami();
    return 0;
}