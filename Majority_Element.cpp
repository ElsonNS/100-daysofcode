// Majority Element
// Approach 1
/*
   We are storeing the frequency of each number in a unordered map through hashing, precomputing the frequency.
   We iterate through the map to find frequency which is greater than half the size of given vector 
   On finding it we return the key that is it.first which is the Majority element.
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a;
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        for(auto it: mp)
        {
            if(it.second >n/2)
            a = it.first;
        }
        return a;
    }
};


