class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,ele;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                c++;
                ele=nums[i];
            }
            else if(ele==nums[i]){
                c++;
            }
            else{
                c--;
            }
        }
        int c1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){
                c1++;
            }
        }
        if((c1>(nums.size()/2))) return ele;
        return -1;
    }
};
