class Solution
{
    public:
    bool static comp(Item a, Item b) {
         double r1 = (double) a.value / (double) a.weight;
         double r2 = (double) b.value / (double) b.weight;
         return r1 > r2;
      }
   // fun
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,comp);
        double ans=0;
        int currWt=0;
        for(int i=0;i<n;i++){
            if(currWt+arr[i].weight<=W){
                currWt+=arr[i].weight;
                ans+=arr[i].value;
            }
            else{
                int remWt=W-currWt;
                ans += (arr[i].value / (double)arr[i].weight) * (double) remWt;
                break;
            }
        }
        return ans;
    }
};
