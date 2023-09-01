class Solution {
   struct meeting {
   int start;
   int end;
   int pos;
   };
    public:
    bool static comp(struct meeting m1, meeting m2){
        return m1.end<m2.end;
    }
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        struct meeting meet[n];
        for (int i = 0; i < n; i++) {
            meet[i].start = start[i], meet[i].end = end[i], meet[i].pos = i + 1;
        }
        sort(meet, meet+n, comp);
        int mx=1;
        int lim=meet[0].end;
        for(int i=1;i<n;i++){
            if(meet[i].start>lim){
                mx++;
                lim=meet[i].end;
            }
        }
        return mx;
    }
};
