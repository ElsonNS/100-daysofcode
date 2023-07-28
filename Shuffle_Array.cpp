// Method 1 Two pointer approach (start and end pointer)
// TC -> O(N)  SC->O(1)
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        int end = n;
        for (int start = 0; start < n; start++)
        {
            result.push_back(nums[start]);
            result.push_back(nums[end++]);
        }
        return result;
    }
};


//Method 2 Using the same array (optimal solution)
class Solution {
public:
    vector<int> shuffle(vector<int> &nums, int n) 
    {
        for (int i = n; i < 2*n; i++) // 
        {
            nums[i] = (nums[i]<<10 | nums[i-n]);
            // modifying nums by left shifting nums[n] to 10-bits 
            // adding nums[i-n] to same nums[i] we are placing two numbers in a single position
        }
        for (int i= n, index = 0; i < 2*n; index +=2, i++)
        {
            nums[index] = nums[i] & 1023; // nums[i] & 11111111 11000000 00000000 00000000 
            nums[index+1] = nums[i]>>10;  //  storing right shifting the nums[i] value by 10 bits and storing it in index + 1
        }
        return nums;
    }
};



