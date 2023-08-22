class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0,c1=0,c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c0++;
            }
            if(nums[i]==1){
                c1++;
            }
            if(nums[i]==2){
                c2++;
            }
        }
        int i=0;
        while(i<c0){
            nums[i]=0;
            i++;
        }
        c1=c1+i;
        while(i<c1){
            nums[i]=1;
            i++;
        }
        c2=c2+i;
        while(i<c2){
            nums[i]=2;
            i++;
        }
    }
};
