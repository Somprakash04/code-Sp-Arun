#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    bool isVowel(char ch){
        //return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
      string vowel= "aeiou";
      for(int i=0;i<5; i++){
        if(vowel[i]==ch){
            return true;
        }
      }  
      return false;
    }
    int maxVowels(string s, int k){
          int maxcount=0;
          for(int i=0; i<= s.length()-k; i++){
            int count=0;
            for(int j=i;j<i+k; j++){
                if(isVowel(s[j])){
                    count++;
                }
            }
            if(count>maxcount){
                maxcount = count;
            }
            if(maxcount == k) return k;
          }
          return maxcount;
    }
};
int main(){
       string s ="abciidef";
       int k=2;
       Solution sol;
       cout<<sol.maxVowels(s, k);
}