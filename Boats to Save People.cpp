class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        

        sort(arr.begin(),arr.end());
        int i=0,j=arr.size()-1;
           int ans=0;
            
            
       while(i<j){

         long long sum=arr[i]+arr[j];
          if(sum>limit){
            j--;
          }else{
            i++;
            j--;
          }
          ans++;
       }
      
       if(i==j){
        ans++;
       }
       return ans;
           
         
            }
};