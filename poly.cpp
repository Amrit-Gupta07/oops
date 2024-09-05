#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    virtual void showRole() const = 0; //Pure virtual Function
};

class Father : public Person{
    public:
        void showRole() const override {
            cout<<"Role : Father"<<endl;
        }
};

class Husband : public Person{
    public:
        void showRole() const override {
            cout<<"Role : Husband"<<endl;
        }
};

class Employee : public Person{
    public:
        void showRole() const override {
            cout<<"Role : Employee"<<endl;
        }
};

void displayRole(const Person &person){
    person.showRole();
}

int main(){
    Father father;
    Husband husband;
    Employee employee;

    displayRole(father);
    displayRole(husband);
    displayRole(employee);
}