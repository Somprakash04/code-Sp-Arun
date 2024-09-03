#include<iostream>
using namespace std;
//inline int product(int x, int y)
//{   //NOt recommend to use below lines with inline functions
   // static int c=6;//This executes only once
    // c=c+1;//Next time this function is run, the value of c will be reteined
   // return x*y+c;
//}
float MoneyReceived(int currentMoney, float factor=1.04){
    return currentMoney*factor;
}
int main(){
    int a,b,money;
    cout<<"Enter the value of a and b :"<<endl;
   // cin>>a>>b;
    cin>>a>>b;
    cout<<"If you have "<<money<<"RS in your bank account, you will recive"<<MoneyReceived(money)<<endl;
   // cout<<"The product of a and b is "<<product(a,b)<<endl;
   // cout<<"The product of a and b is "<<product(a,b)<<endl;
   // cout<<"The product of a and b is "<<product(a,b)<<endl;
   // cout<<"The product of a and b is "<<product(a,b)<<endl;
   // cout<<"The product of a and b is "<<product(a,b)<<endl;
   return 0
}