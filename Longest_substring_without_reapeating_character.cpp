class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int mx=0;
        int i=0,j=0;
        while(i<s.length() && j<s.length()){
            if(st.count(s[j])){
                st.erase(s[i]);
                i++;
            }
            else{
                st.insert(s[j]);
                j++;
                mx=max(mx,j-i);
            }
        }
        return mx;
    }
};
