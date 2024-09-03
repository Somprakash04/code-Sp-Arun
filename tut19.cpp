#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"\nusing function with 2 arguments"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"\nusing function with 3 arguments"<<endl;
    return a+b+c;
}
// Calculate the volume of a cylinder
float Volume(double r,int h){
    return(3.14*r*r*h);
}
//Rectangular box
int volume (int l, int b, int h){
    return (l*b*h );
}
//volume of cube

int main(){
    cout<<"\nthe sum of 3,7 and 6 is "<<sum(3,7,6);
    cout<<"\nthe sum of 3 and 7 is "<<sum(3,7);
    cout<<"\nthe volume of a cube of 3 and 7 is "<< Volume(3,7);
    cout<<"\nthe volume of a box is "<< volume(3,4,7);
    cout<<"\nthe volume of a cube of 3 and 7 is "<< Volume(3,7);

    return 0
}