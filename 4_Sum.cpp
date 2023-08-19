lass Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>v;
        int i,j,k,l;
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(i=0;i<n;i++){
           if(i>0 && nums[i]==nums[i-1]) continue;
           for(j=i+1;j<n;j++){
               if(j>i+1 && nums[j]==nums[j-1]) continue;
               k=j+1;
               l=n-1;
               while(k<l){
                   long long sum=nums[i];
                   sum+=nums[j];
                   sum+=nums[k];
                   sum+=nums[l];
                   if(sum==target){
                       vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                       v.push_back(temp);
                       k++;
                       l--;
                       while (k < l && nums[k] == nums[k - 1]) k++;
                       while (k < l && nums[l] == nums[l + 1]) l--;
                   }
                   else if(sum<target){
                       k++;
                   }
                   else{
                       l--;
                   }
               }
           }
        }
        return v;
    }
};
