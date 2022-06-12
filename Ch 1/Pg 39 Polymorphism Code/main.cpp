#include <iostream>

using namespace std;

class Class1 {
public:
    virtual void f() {
        cout << "Function f() in Class 1" << endl;
    }

    void g() {
        cout << "Function g() in Class 1" << endl;
    }
};

class Class2 {
public:
    virtual void f() {
        cout << "Function f() in Class 2" << endl;
    }

    void g() {
        cout << "Function g() in Class 2" << endl;
    }
};

class Class3 {
public:
    virtual void h() {
        cout << "Function h() in Class 3" << endl;
    }
};

class C {
//public:
    int n;
    friend int main();
} ob;

int main() {
    Class1 object1, *p;
    Class2 object2;
    Class3 object3;

    p = &object1;
    p->f();
    p->g();

    p = (Class1*) &object2;
    p->f();
    p->g();

    p = (Class1*) &object3;
    p->f();
    p->g();
    //p->h();

    cout << (10 * ob.n) << endl;

    return 0;
}