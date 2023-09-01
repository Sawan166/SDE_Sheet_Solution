class Solution 
{
    public:
    bool static comparison(Job a, Job b){
        return (a.profit>b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) { 
        // your code here
        sort(arr,arr+n,comparison);
        int mx=arr[0].dead;
        for(int i=1;i<n;i++){
            mx=max(mx,arr[i].dead);
        }
        bool status[mx+1]={0};
        int cntJob=0, jobPro=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead-1;j>=0;j--){
                if(status[j]==false){
                    status[j]=true;
                    cntJob++;
                    jobPro+=arr[i].profit;
                    break;
                }
            }
        }
        return {cntJob,jobPro};
    } 
};
