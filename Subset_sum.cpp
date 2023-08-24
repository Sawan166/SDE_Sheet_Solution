class Solution {
public:
    void findsubset(int ind, vector<int>& nums, vector<vector<int>>&ans, vector<int>& v){
        ans.push_back(v);
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i]==nums[i-1]) continue;
            v.push_back(nums[i]);
            findsubset(i+1,nums,ans,v);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        vector<int> v;
        sort(nums.begin(),nums.end());
        findsubset(0,nums,ans,v);
        return ans;
    }
};
