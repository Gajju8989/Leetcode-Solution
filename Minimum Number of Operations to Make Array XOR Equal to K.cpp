class Solution {
public:
    int minOperations(vector<int>& arr, int k) {
        long long x=0;
        for(int i=0; i<arr.size(); i++){
 
         x ^=arr[i];
        }
        int cnt=0;
        if(x==k){
return 0;}else{
          string s="",s1="";
   for(int i=0; i<31; i++){
    if(x&(1ll<<i)){
         s +="1";
    }else{
        s +="0";
    }
    if(k&(1ll<<i))
    {
        s1 +="1";
    }else{
        s1 +="0";
    }
   }
   reverse(s.begin(),s.end());
   reverse(s1.begin(),s1.end());
  for(int i=0; i<s.size(); i++){
if(s[i]!=s1[i]){
    cnt++;
}}
            
        }
        return cnt;
    }
};