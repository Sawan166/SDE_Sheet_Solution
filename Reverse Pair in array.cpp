class Solution {
public:
    void merge(vector<int> &nums,int start,int mid,int end,int &res){
        int l=start,r=mid+1;
        while(l<=mid && r<=end){
            long long p=nums[l];
            long long q=(long long) 2*nums[r];
            if(p>q){
                res+=mid-l+1;
                r++;
            }
            else{
                l++;
            }
        }
        sort(nums.begin()+start,nums.begin()+end+1);
    }
    
    void mergeSort(vector<int> &nums,int start,int end,int &res){
        if(start==end){
            return ;
        }
        int mid=start+(end-start)/2;
        mergeSort(nums,start,mid,res);
        mergeSort(nums,mid+1,end,res);
        merge(nums,start,mid,end,res);
    }

    int reversePairs(vector<int>& nums) {
        int res=0;
        mergeSort(nums,0,nums.size()-1,res);
        return res;
    }
};
