#include<iostream>
using namespace std;

int main(){
    char c = 'a';

    cout<< "c =" << c << endl;
    cout<< "&c =" << (void*)&c <<endl;

    return 0;
}