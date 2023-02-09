

                                                          // Find the Smallest Divisor Given a Threshold  //


class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low=1;
        int high=INT_MAX;

        while(low<high)
        {
            int mid=low+(high-low)/2;
            int sum=0;
            for(auto it:nums)
            {
                sum+=(it/mid)+(it%mid!=0);
            }
            if(sum>threshold)
            low=mid+1;
            else
            high=mid;
        }
        return low;
    }
};
