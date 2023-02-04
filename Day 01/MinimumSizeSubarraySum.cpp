                                                           
                                                           
                                                           // Minimum Size Subarray Sum  //
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,left=0,right=0;
        int mini=INT_MAX;
        
        while(right<nums.size())
        {
            while(sum<target  && right<nums.size())
            {
                sum+=nums[right++];
            }
            if(sum<target)
            break;
            while(sum>=target && left<right)
            {
                sum-=nums[left++];
            }
            mini=min(mini,right-left+1);
        }
        if(mini==INT_MAX)
        return 0;

        return mini;
    }
};
