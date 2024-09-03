#include<iostream>
using namespace std;
int main(){
    //what is a pointer ?== data type which holds the address of other data types
    int a=3;
    int* b=&a; //&-- Address of operator
    cout<<b<<endl;  //*-- Deference operator
    cout<<&b<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    //*-- Deference operator
    cout<<"the value at address b is:"<<*b<<endl;
    cout<<*b<<endl;
    //**-- Pointer to pointer
    int**c=&b;
    cout<<"the address of b is:"<<&b<<endl;
    cout<<c<<endl;
    cout<<**c<<endl;
    cout<<&c<<endl;

    return 0;
}