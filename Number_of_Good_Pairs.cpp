// Approach 1  Brute Force ----> checking each pair are equal or not with index i < j
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for (int i= 0; i < nums.size()-1; i++)
        {
            for (int j = i + 1; j <nums.size(); j++)
            {
                if(nums[i] == nums[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};
// TC --> O(n square)

//Approach 2 
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0;
        int i = 0;
        for(int j=1;j<nums.size();j++){
            if(nums[i] == nums[j]){
                count+=j-i;
            }
            else
            {
                i=j;
            }
        }
        return count;
    }
};

// TC ---> O(nlogn)
