

                                                              // Find  Duplicate Element  //

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int size=nums.size();
        int low=1;
        int high=size-1;

        while(low<high)
        {
            int mid=low+(high-low)/2;
            int count=0;
            for(int i=0; i<size; i++)
            {
                if(nums[i]<=mid)
                count++;
            }
            if(count<=mid)
            low=mid+1;
            else
            high=mid;
        }
        return low;




        /*
        1) Using Hashmap
            1.use hashmap to track frequency of element
            2.check wheather ans.second==2 return that element first
        
        //creating unordered map
        unordered_map<int ,int> ans;
        //traversing array
        /*for(auto x:nums)
            ans[x]++;
        //checking frequency of elements
        for(auto z:ans)
            if(z.second>1)
                return z.first;
        return -1;
        */
        
        
        /*
        2) Using looping
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]==nums[i-1])
                return nums[i];
        }
        return -1;
        */
    }
};
