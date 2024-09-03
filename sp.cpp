#include <iostream>
using namespace std;

float avg(int a, int b, int c) {
    return ((a+b+c)/3);
}

int main()
{

    float a,b,c;
    cout<<"Enter Three Numbers"<<endl;
    cin>>a>>b>>c;
    cout<<"Average is "<<avg(a,b,c)<<endl;
    return 0;
}