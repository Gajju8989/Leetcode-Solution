class Solution {
public:
 int f(int i,int prev,vector<vector<int>>&arr,vector<vector<int>>&dp){

 
    if(i>=arr.size()){
        return 0;
    }
    if(dp[i][prev]!=-1){
        return dp[i][prev];
    }
    int mn=INT_MAX;
    for(int j=0; j<arr[0].size(); j++){
        if(prev!=j){
            mn=min(mn,f(i+1,j,arr,dp)+arr[i][j]);
        }
    }
    return dp[i][prev]=mn;
 }

    int minFallingPathSum(vector<vector<int>>& arr) {
        if(arr.size()==1){
            return *min_element(arr[0].begin(),arr[0].end());
        }
       
         int n=arr.size();
         int mn=INT_MAX;
 vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    for(int i=0; i<n; i++){
    mn=min(mn,f(0,i,arr,dp));
    }
    return mn;
    }
};