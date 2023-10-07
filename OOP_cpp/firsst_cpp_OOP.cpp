#include<iostream>
using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself() {
        string Name = "Ra";
        cout <<"Name- "<<Employee::Name<<endl;
        cout <<"Company- "<<Company<<endl;
        cout <<"Age- "<<Age<<endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main(){

    Employee employee1 = Employee("Rahul", "Bracu", 21);

    employee1.IntroduceYourself();
    
    return 0;
}