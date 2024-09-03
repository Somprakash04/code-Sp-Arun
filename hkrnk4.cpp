#include <iostream>
using namespace std;

int main() {
    // Complete the code.
    
   int n,m;
   cin>>n;
   cin>>m;
   //cin>>m;
   for(n=0;n<=m;n++){
   if(n==1){
       cout<<"one"<<endl;
       cout<<"odd";
   }
    else if(n==2){
       cout<<"two"<<endl;
       cout<<"even"<<endl;
   }
     else if(n==3){
       cout<<"three"<<endl;
       cout<<"odd";
   }
     else if(n==4){
       cout<<"four"<<endl;
       cout<<"even";

   }
     else if(n==5){
       cout<<"five"<<endl;
       cout<<"odd";
   }
     else if(n==6){
       cout<<"six"<<endl;
       cout<<"even";
   }
     else if(n==7){
       cout<<"seven"<<endl;
       cout<<"odd";
   }
     else if(n==8){
       cout<<"eight"<<endl;
       cout<<"even";
       
   } else if(n==9){
       cout<<"nine"<<endl;
       cout<<"odd";
   }
   
    if (n>9 && n%2==0){
           cout<<"even";
       }
       else if(n>9 && n%2!=0){
           cout<<"odd";
       }
   }
    return 0;
}