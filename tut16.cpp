#include<iostream>
using namespace std;
int sum(int a, int b){
    int c =a+b;
    return c;
}
//This will not swap a and b
int swap (int a, int b){
    int temp =a;
    a=b;
    b =temp;
}

//Call by referwnce using pointer
int swapPointer(int *a, int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}
//Call by referwnce using c++ reference variable
//int&
void swapReferenceVar(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
    
}
int main(){
    int x=4 ,y=5;
   // cout<<"The sum of a and b is "<<sum(a,b);
    cout<<"The value of x is"<<x<<"and the value of y is"<<y<<endl;
  //  swap(x,y);//This will not swap a and b
    //swapPointer(&x,&y);//This will swap a and b using pointer reference 
  //  swapReferenceVar(x,y)=123 ;//This will swap a and b using reference variable     
    swapReferenceVar(x,y) ;
    cout<<"The value of x is"<<x<<"and the value of y is"<<y<<endl;
   
    return 0;
}