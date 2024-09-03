#include<iostream>
using namespace std;
 typedef struct employee 
    {
        /* data */
        int eId;   //4
        char favchar;    //1 
        float salary;    //4
    }ep ;
    union money
       {
        /* data */
        int rice;   //4
        char car;  //1
        float pounds;   //4
    } ;
    int main(){
        enum meal{breakfast,lunch,dinner};
        meal m1= breakfast;
        cout<<m1;
        cout << breakfast;
        cout<<lunch;
        cout<<dinner;
        /*ep harry;
        union money m1;
        m1.rice=34;
        m1.car='c';
        cout<<m1.rice;
        cout<<m1.car;*/
    


      /*int main (){
    
    struct employee harry;
    struct employee kkkkk;
    harry.eId=1;
    harry.favchar='c';
    harry.salary=1000000;
    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favchar<<endl;
    cout<<"The value is "<<harry.salary<<endl;*/
    return 0;
}
