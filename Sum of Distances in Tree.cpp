class Solution {
public:


 vector <int> graph[100005];
 int dfs(int source,vector <int>&subtree,int par=-1){
  int cnt=0;
  for(auto it: graph[source]){
        if(it==par){
            continue;
        }
       cnt += dfs(it,subtree,source);
        cnt +=subtree[it];
        subtree[source] +=subtree[it];
  }
  return cnt;
 }
 
 void dfs1(int source,vector<int>&ans,vector<int>&subtree,int curr,int par=-1){
        ans[source]=curr;
        for(auto it:graph[source]){
            if(it==par){
                continue;    
            }
         dfs1(it,ans,subtree,curr-subtree[it]+subtree[0]-subtree[it],source);
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        
        for(int i=0; i<n-1; i++){
            int a=edges[i][0];
            int b=edges[i][1];
            
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        vector <int> subtree(n,1);
  int sum=dfs(0,subtree);
  vector <int> ans(n,0);
  dfs1(0,ans,subtree,sum);
    return ans;
    }
};