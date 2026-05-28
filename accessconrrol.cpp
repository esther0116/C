#include<iostream>
using namespace std;

class Base{
private:
    int Base_private;

protected:
    int Base_protected;

public:
    int Base_public;

    void setBasenum(int n1, int n2, int n3){

        Base_private = n1;
        Base_protected = n2;
        Base_public = n3;
    }
};

class Derived : public Base{

public:

    void setBasenum(int n1, int n2, int n3){

        // Base_private = n1; // Compile Error

        Base_protected = n2;
        Base_public = n3;
    }
};

int main(){

    Base base;

    // base.Base_private = 1;    // Compile Error
    // base.Base_protected = 2;  // Compile Error

    base.Base_public = 3;

    return 0;
}