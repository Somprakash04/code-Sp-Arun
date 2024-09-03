#include<iostream>
using namespace std;

int fib(int n)
{   if(n<=1){
    return n;
}
    return fib(n-2)+fib(n-1);
}//fib(5)--==fib(4)+fib(3)
//fib(3)+fib(2)+fib(2)+fib(1)
int factorial(int n)
{   if(n<=1){
    return 1;
}
    return n*factorial(n-1);
}//eg.--== factorial(4)=4*factorial(3);
//factorial(4)=4*3*factorial(2);
//factorial(4)=4*3*2*factorial(1);
//factorial(4)=4*3*2*1;
int main(){
    int a;
    //Factorial of a number'
    //0!=1, n!=n(n-1)
    cout <<"enter a number"<<endl;
    cin>>a;
  //  cout<<"factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term in fibanacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}