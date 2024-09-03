#include<iostream>
using namespace std;
int main(){     //Array example
     int marks[4]={1,2,3,4};
     cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
     cout<<marks[2]<<endl;
     cout<<marks[3]<<endl;     
     //you can changen the value of an array 
    /* cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
     marks[2]=6;
     cout<<marks[2]<<endl;
     cout<<marks[3]<<endl;     */
    // Loop in Array
     for (int i = 0; i < 4; i++)
     {
      cout<<"The value of marks"<<i<<" is "<<marks[i]<<endl; /* code */
     }
    //usin while
    int i=0;
    while(i<4){
        cout<<marks[i]<<endl;
        i++;
    } 
    //using do-while;
    
    do{
        cout<<marks[i]<<endl;
        i++;
    }
    while(i<4);
    //pointer and arrays
    int*p=marks; 
    cout<<*(p++);
    to be continue;;;;;
     
    return 0;
}