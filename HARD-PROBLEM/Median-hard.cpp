#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         int m=nums1.size(), n=nums2.size();
//         // int idx=m+n-1, i=m-1, j=n-1;
//         // int mid=idx/2;
//         vector<int>ans(m+n-1, 0);
//         int idx=m+n-1, i=m-1, j=n-1;
//         int mid=idx/2;
//         while(i>=0 && j>=0){
//             if(nums1[i]>=nums2[j]){
//                 // nums1[idx]=nums1[i];
//                 // idx--;i--;
//                 ans[idx]=nums1[i];
//                 idx--; i--;
//             }
//             else{
//                 // nums1[idx]=nums2[j];
//                 // idx--;j--;
//                 ans[idx]=nums2[j];
//                 idx--; j--;
//             }
//         }
//         while(j>=0){
//             nums1[idx]=nums2[j];
//             idx--;j--;
//         }
//         while(i>=0){
//             ans[idx]=nums1[i];
//             idx--;i--;
//         }
//         if(idx%2!=0){
//             return nums1[mid];
//         }
//         else{
//             return (nums1[mid-1]+nums1[mid])/2;
//         }
//     }
// };
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(), n=nums2.size();
        vector<int>ans(m+n, 0);
        int idx=0;
        for(int i=0; i<m; i++){
            ans[idx]=nums1[i];
            idx++;
        }
        for(int i=0; i<n; i++){
            ans[idx]=nums2[i];
            idx++;
        }
        sort(ans.begin(), ans.end());
        int total =m+n;
        if(total%2!=0){
            return ans[total/2];
        }
        else{
            return (ans[total / 2 - 1] + ans[total / 2]) / 2.0;
        }
    }
};


int main(){
    // vector<int>nums1={1,3};
    // vector<int>nums2={2};
    vector<int>nums1={1,2,5};
    vector<int>nums2={4};
    Solution sol;
    cout<<sol.findMedianSortedArrays(nums1, nums2);
    return 0;
}