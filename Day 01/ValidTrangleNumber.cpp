

                                                              // Valid trangle number //

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        /*
        Using two pointer approach
        1) sort arrray
        2) take int low =0, high=final-1 and final=nums.size()-1
        3) count no of triplets
        */
        sort(nums.begin(),nums.end());
        int numOfTriplets=0;
   
        for(int final=nums.size()-1; final>=2; final--)
       {
           int low=0,high=final-1;
        while(low<high)
        {
            if(nums[low]+nums[high]>nums[final])
            {
                numOfTriplets+=(high-low);
                high--;
            }
            else 
            {
                low++;
            }
           
        }
       }
        return numOfTriplets;
    }
};
