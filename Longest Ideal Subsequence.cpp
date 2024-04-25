class Solution {
public:
int f(int i,int prev,vector<int>&v,int k,vector<vector<int>>&dp){
   if(i==v.size()){
    return 0;
   }
   if(dp[i][prev]!=-1){
    return dp[i][prev];
   }
   int take=0;
   int nottake=0;

   if(prev==0 || abs(v[i]-prev)<=k)  {
    take=f(i+1,v[i],v,k,dp)+1;
   }
   nottake=f(i+1,prev,v,k,dp)+0;
   return dp[i][prev]=max(take,nottake);
}

    int longestIdealString(string s, int k) {
         vector <int> v;
        for(int i=0; i<s.size(); i++){
        v.push_back( (s[i]-'a')+1);
        }
        vector<vector<int>> dp(s.size()+1,vector<int>(28,-1));
       return f(0,0,v,k,dp);
    }
};