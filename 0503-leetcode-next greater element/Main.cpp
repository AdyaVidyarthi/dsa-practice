**Time Complexity - O(n)**
**Space Complexity -O(n)**


class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        stack<int> st;
        int index=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++) {
            if(nums[i]>maxi) {
                maxi=nums[i];
                index=i;
            }
        }
         int j;
        ans[index]=-1;
        st.push(maxi);
        if(index!=0) {
             j=index-1;
        }
        else {
            j=n-1;
        }
        
        while(j!=index) {
            while(!st.empty() && st.top()<=nums[j]) {
              st.pop();  
                
            }
            if(!st.empty()) {
                ans[j]=st.top();
            }
            else {
                ans[j]=-1;
            }
            st.push(nums[j]);
            if(j==0) j=n-1;
            else j=j-1;
            
        }
        return ans;
    }
};
