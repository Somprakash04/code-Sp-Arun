#include<iostream>
using namespace std;
//function prototype
//type func.name(argument)
//int sum(int a, int b);>>>>-- Acceptable
//int sum(int a,  b);>>>>--Not Acceptable
int sum(int , int );//>>>>>-- Acceptable
//void g(void);
void g();
int main(){
    int num1,num2;
    cout<<"Enter first number:"<<endl;
    cout<<"Enter second number:"<<endl;
    cin>>num1>>num2; //num1 and num2 are actual parameters
    cout<<"total" <<sum(num1,num2);
     g();
    return 0;
}
int sum(int a, int b){
    //formal parameter a and b will be taking 
//    values from actual
    int c=a+b;
    return c;
}
void g(){
    cout<<"\nHello, Good morning";
}