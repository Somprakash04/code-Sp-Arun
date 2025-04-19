#include<iostream>
#include<vector>
#include<algorithm>
#include <array>
#include<climits>
using namespace std;
bool isvalid(vector<int>&nums,int n,int c,int distance){
    int cows=1,getdist=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]-getdist >=distance){
            cows++;
            getdist=nums[i];
        }
        if(cows == c){
            return true;
        }
    }
        return false;
}
int AggressiveCows(vector<int>&nums,int n,int c){
    sort(nums.begin(),nums.end());
    int st=1,end= nums[n-1]-nums[0],ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(nums,n,c,mid)){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
//////////////
int main(){
    vector<int>nums={1,2,4,8,9};
    int n=5,c=3;
    cout<<"answer:"<<AggressiveCows(nums,n,c);
    return 0;
}