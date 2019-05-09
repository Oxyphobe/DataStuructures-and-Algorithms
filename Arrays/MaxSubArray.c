/*
 
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.


*/

  int maxSubArray(vector<int>& nums) {
    
            int sum=nums[0], max = nums[0];
            
            
            for(int i=1; i<nums.size(); i++)
            {
                
                /* find sum, which can be either current element or sum till current element */
                if( nums[i]>sum+nums[i])
                {
                    sum = nums[i]; //Current element is > that previous sum
                    
                }
                else
                {
                    
                    sum+=nums[i]; //previous sum is greater than current element
                    
                }
                
                
               /*Find max of sums */
                if(sum>max)
                    max = sum;
                
            }
            
            
            return max;
            
            
            
    }

