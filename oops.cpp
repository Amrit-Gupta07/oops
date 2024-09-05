#include<bits/stdc++.h>
using namespace std;




class Student{
    private:
    int marks = 200;

    public:
    char grade;

    Student(){
        cout<<"Constructor without argument Called"<<endl;
    }

    Student(int marks, char grade){
        cout<<"Constructor with argument Called"<<endl;
        cout<<this<<endl;
        this->marks = marks;
        this->grade = grade;
    }

    void print(){
        cout<<"Marks : "<<this->marks<<endl;
        cout<<"Grade : "<<this->grade<<endl;
    }

    void setmarks(int m){
        marks = m;
    }
    int getmarks(){
        return marks;
    }
};



int main(){


    // Student amrit;
    Student amrit(22,'Q');
    cout<<"Address of amrit"<< &amrit<<endl;


    // amrit.grade = 'A';
    amrit.print();
    

    // amrit.setmarks(90);
    


    // Student *samridh = new Student;
    // samridh->grade = 'B';
    // samridh->setmarks(660);
    // samridh->print();



    
}