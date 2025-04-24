#include<iostream>
using namespace std;
/// SORTING
///  BUBBLE SORT
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=5;
    int arr[]={4,1,5,2,3};
    bubblesort(arr,n);
    printarray(arr,n);
return 0;
}


