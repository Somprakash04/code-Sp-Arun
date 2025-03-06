#include<iostream>
#include<vector>
using namespace std;
bool isvalid(int arr[],int n, int m, int maxallowed){
    int student = 1, pages=0;
    for(int i=0; i<n; i++ ){
        if(arr[i]>maxallowed) return false;
        if(arr[i] + pages <=maxallowed){
            pages += arr[i];
        }
        else{
            student++;
            pages=arr[i];
        }
    }
    return student>m ? false : true;
}
int bookallocation(int arr[] ,int n,int m){
    if(m>n) return -1;
    int ans = -1,st=0, sum =0;
    for(int i=0;i<n;i++){
      sum+=arr[i];
    }
    int end = sum;
    while(st<=end){
        int mid =st + (end-st)/2;
        if(isvalid(arr,n, m, mid)){
            ans = mid;
            end =mid-1;
        }
        else{
            st =mid+1;
        }
    }
    return ans;
}
int main(){
   //int arr[]={2,1,3,4};
   int arr[] = {15, 17, 20, 19, 10};
   int n= 5;
   int m=2;
   cout<<"answer:"<<bookallocation(arr,n,m);   
}