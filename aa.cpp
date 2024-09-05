#include <bits/stdc++.h>
using namespace std;

class A {
public:
    A() {
        cout << "A" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "B" << endl;
    }
};

class C : public A {
public:
    C() {
        cout << "C" << endl;
    }
};

int main() {
    B b;  // Correctly instantiate an object of class B
    C c;  // Correctly instantiate an object of class C
    return 0;
}
