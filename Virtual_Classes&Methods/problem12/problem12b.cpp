#include <iostream>
using namespace std;

class B {
    int a;
    public:
    virtual void fun()=0;
    void fun2() {
        cout<<"Hello World!"<<endl;
    }
};

class D: public B {
    public:
    D() {
        cout<<"B"<<endl;
    }
};

int main() {
    D obj1;
    obj1.fun();
    return 0;
}