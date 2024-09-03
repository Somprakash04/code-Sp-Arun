#include<iostream>
using namespace std;
int main(){
    int age;
     cout<<"this is tutorial 9"<<endl;
     cout<<"tell me yout age:"<<endl;
     cin>>age;
     /*
     if(age<18){
        cout<<"you can not come to my party"<<endl;
     }
    else if(age>=18){
        cout<<"you allow my party"<<endl;
    }
    */
    //selection control structure : switch case statements
    switch (age)
    {
    case 18:
    cout<<"you are 18"; /* constant-expression */
        /* code */
        break;
            case 20:
    cout<<"you are 20"; /* constant-expression */
        /* code */
        break;
      case 10:
    cout<<"you are 10"; /* constant-expression */
        /* code */
        break;
            case 2:
    cout<<"you are 2"; /* constant-expression */
        /* code */
       break;
    
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }

    return 0
}