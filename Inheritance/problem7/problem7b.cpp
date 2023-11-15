#include <iostream>
using namespace std;

class A {
    public:
    A(int x) {
        cout<<"A"<<x;
    }
    void get() {cout<<"Hello World!"<<endl;}
};

class B: protected A{
    public:
    B(int x,int y): A(y) {
        cout<<"B"<<x;
    }
};

class C: public B{
    public:
    C(int x,int y,int z): B(y,z) {
        get();
        cout<<"C"<<x;
    }
};

int main() {
    A a(20);
    a.get();
    return 0;
}