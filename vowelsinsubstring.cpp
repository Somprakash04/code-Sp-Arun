#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
          int maxVowels(string s, int k){
            string wovel = {'a','e','i','o','u'};
            int count =0;
            for(int i=0; i<k ; i++){
                for(int j=0; j<wovel.size(); j++){
                    if(s[i] == wovel[j]){
                        count++;
                    }
                }
                if(count == k) return count;
            }
            for(int i=k; i<s.size(); i++){
                for(int j=0; j<wovel.size(); j++){
                    if(s[i] == wovel[j]){
                        count++;
                    }
                }
            }
            return count;
          }
};
int main(){
       string s ="abciiidef";
       int k=3;
       Solution sol;
       cout<<sol.maxVowels(s, k);
}