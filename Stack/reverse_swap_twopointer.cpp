#include<iostream>
#include<Stack>
#include<cstring>
using namespace std;

void Reverse_swap(char *a, int x){
    // stack<char> S;
    int end = x-1;
    int start = 0;
    for(int i=0; i<=x; i++){
        char temp ;
        if ( start != end){
            // temp = a[start];
            // a[start] = a[end];
            // a[end] = temp;
            swap(a[start], a[end]);
            end--;
            start++;
        }
        else break;
    }
}

int main(){
    char C[100] = "Rahul";
    // printf("Enter the text: %s\n", C);
    cout<<"Enter the text: ";
    gets(C);
    Reverse_swap(C, strlen(C));
    printf("The result: %s",C);
    return 0;
}