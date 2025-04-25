#include<iostream>
using namespace std;
///// SELECTION SORT
void selectionsort(int arr[],int n ){
    for(int i=0;i<n;i++){
        int smallest=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]){// if(arr[j]<arr[smallest])
            smallest=j;
            }
        }
        swap(arr[i],arr[smallest]) ;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={4,1,5,2,3};
    int n=5;
    selectionsort(arr,n);
    print(arr,n);   
}

// void selectionsort(int arr[],int n){
//      for(int i=0;i<n;i++){
//         int smallestidx=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[smallestidx]);
//             smallestidx=j;
//         }
//      }
//         swap(arr[i],arr[smallestidx]);
//     }

// int main(){
//     int arr[]={5,4,2,16,67,3};
//     //int n=sizeof(arr)/sizeof(arr[0]);
//     int n=6;
//     selectionsort(arr,n);
//     for(int ele:arr){
//         cout<<ele<<" ";
//     }
   
// }