class Solution {
public:
 int f(int i,int prev,string &s,string &s1,vector<vector<int>>&dp){
    if(i>=s1.size()){
    return 0;
   }
   if(dp[i][prev]!=-1){
     return dp[i][prev];
   }
   int ans=INT_MAX;
   for(int j=0; j<s.size(); j++){
     if(s[j]==s1[i]){
             int temp=s.size()-abs(j-prev);
            int temp1=abs(j-prev);
            ans=min(ans,min(temp,temp1)+1+f(i+1,j,s,s1,dp));
     }
   }
   return dp[i][prev]=ans;
 }

    int findRotateSteps(string s, string s1) {
        vector <vector<int>> dp(s1.size()+1,vector<int>(s.size()+1,-1));
    return f(0,0,s,s1,dp);
    }
};