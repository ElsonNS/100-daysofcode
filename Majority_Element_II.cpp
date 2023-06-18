//Approach 1
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> majority;
        for (int i = 0; i< nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for (auto it: mp)
        {
            if(it.second >(nums.size()/3))
            {majority.emplace_back(it.first);}
        }
        return majority;
    }
};