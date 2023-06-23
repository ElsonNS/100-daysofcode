class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int j = 0;
        int mmax =0;
      
        for (auto i = 0; i< nums.size(); i = i+ 1)
        {
            if (nums[i] == 1)
            {
               j++;
            }
            else
            {
                count = max(count,j);
                j =0;
            }

        
        }
        count = max(count,j);
        return count;  
    }
};