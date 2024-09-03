#include<iostream>
using namespace std;
int main(){
float ph;

  cout<<"Enter ph number:"<<endl;
  cin>>ph;
  if(ph<7.0){
    cout<<"acidic"<<endl;
  }
  else if(ph>7.0){
    cout<<"basic"<<endl;
  }
  else {
    cout<<"neutral";
  }
  return 0;    
} 