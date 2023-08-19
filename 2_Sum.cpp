class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> mpp;
    vector<int>v;
    int n=arr.size();
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded],i};
        }
        mpp[num] = i;
    }
    return v;
    }
};
