#include<iostream>
#include<string.h>
using namespace std;

void Increment(int *p){
    *p=*p+100;
}

int main(){

    // int x=10;;
    // int arr[] = {10,12,33,41,35};
    // Increment(&x);
    // printf("%d",x);
    // int* p = arr;

    char a[20]= "Rahul\0";
    char b[] = {'r','a','h','u','l','\0'};

    int byte_size_a = sizeof(a);
    int len_a = strlen(a);
    cout << byte_size_a<<' ' << len_a<<endl;

    int len_b = strlen(b);
    cout << len_b<<endl; 
    printf("%s",b);

    // cout << *p;

    return 0;
}