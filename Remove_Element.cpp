class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        int n = nums.size();
        for (auto i =0; i< n; i++)
        {
            if(nums[i] != val)
            {
               nums[index] = nums[i];
               index++;
            }
        }
        return index;
    }
};