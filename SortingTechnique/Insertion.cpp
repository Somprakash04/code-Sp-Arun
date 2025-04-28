#include<iostream>
using namespace std;
/// SORTING
///  INSERTION SORT

int insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
    int curr=arr[i];
    int prev=i-1;
    while (prev>=0 && arr[prev]>curr)// while (prev>=0 && arr[prev]<curr)

    {
        arr[prev+1]=arr[prev];
        prev--;
    }
    arr[prev+1]=curr;
    }
    return -1;
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=5;
    int arr[]={4,1,5,2,3};
    insertionsort(arr,n);
    printarray(arr,n);
return 0;
}
