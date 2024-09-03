#include<iostream>
using namespace std;

class Employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a,int b, int c);//declaration
    void getdata(){
        cout<<"The valud of a is "<<a<<endl;
        cout<<"The valud of b is "<<b<<endl;
        cout<<"The valud of c is "<<c<<endl;
        cout<<"The valud of d is "<<d<<endl;
        cout<<"The valud of e is "<<e<<endl;
        
    }
};

 void  Employee :: setdata(int a1, int b1, int c1 ){
      a=a1;
      b=b1;
      c=c1;
 }

int main(){
    Employee harry;
   // harry.a=0;
    harry.d=22;
    harry.e=34;
    harry.setdata(1,2,3);
    harry.getdata();
    return 0

}