#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Optimize approach
// class solution{
//     public:
//           void Colors(vector<int>&Colors){
//             int n=Colors.size();
//             int count0=0, count1=0, count2=0;
//             for(int i=0;i<n;i++){
//                 if(Colors[i]==0){
//                     count0++;
//                 }
//                 else if(Colors[i]==1){
//                     count1++;
//                 }
//                 else{
//                     count2++;
//                 }
//             }
//             int idx=0;
//             for(int i=0;i<count0;i++){
//                 Colors[idx++]=0;
//             }
//             for(int i=0;i<count1;i++){
//                 Colors[idx++]=1;
//             }
//             for(int i=0;i<count2;i++){
//                 Colors[idx++]=2;
//             }
//           }
// };
// Optimal Approach
class solution {// DUTCH NATIONAL FLAG ALGORITHM
    public:  ////LEETCODE 75;
          void Colors(vector<int>&Colors){
          int low=0,mid=0,n=Colors.size(), high=n-1;
          while(mid<=high){
          if(Colors[mid]==0) {
            swap(Colors[low],Colors[mid]);
            mid++;
            low++;
          }
            else if(Colors[mid]==1){
            mid++;
            }
            else{
            swap(Colors[high],Colors[mid]);
            high--;
            }
          }         
          }
          };
int main(){
     vector<int>Colors ={0,1,1,2,0,2,1};
    // sort(colors.begin(),colors.end());
    // cout<<"sort colors using brute force approach:";
    // for(int i=0;i<Colors.size();i++){
    //     cout<<Colors[i]<<" ";
    // }
    cout<<endl;
    solution sol;
    sol.Colors( Colors);
    // cout<<"sort colors using optimize approach:";
    // for(int i=0;i<Colors.size();i++){
    //     cout<<Colors[i]<<" ";
    // }
    cout<<"sort colors using optimal approach:";
    for(int i=0;i<Colors.size();i++){
        cout<<Colors[i]<<" ";
    }
    return 0;
}