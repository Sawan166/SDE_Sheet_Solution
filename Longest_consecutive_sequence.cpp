class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int n=nums.size(),mx=0;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int c=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    x++;
                    c++;
                }
                mx=max(mx,c);
            }
        }
        return mx;
    }
};
