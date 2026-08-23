class Solution {
public:
  bool check(vector<int>& arr,int k,int mid,int n) {
        int sum=0;
        int subarray=1;
            
            for(int i=0;i<n;i++) {
            if(arr[i]>mid) return false;
            if(sum+arr[i]<=mid) {
                sum+=arr[i];
            }
                
            else {
            
            subarray++;
            sum=arr[i];
            }
           
            }
        
            return subarray<=k;     
    }
    
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=INT_MIN;
        int sum=0;
        int ans=-1;
        for(int i=0;i<n;i++) {
            if(nums[i]>maxi) maxi=nums[i];
            sum+=nums[i];
        }
        int low=maxi;
        int high=sum;
        while(low<=high) {
            int mid=(low+high)/2;
            bool subarraySum=check(nums,k,mid,n);
            if(subarraySum) {
                  ans=mid;
                  high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return ans;

    }
};
