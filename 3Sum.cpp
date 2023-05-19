// Approach 1 
// Taking 3 nested loops + Sorting + HAsh Table(set) ----> Brute Force Approach 
// Time complexity O(N^2)
// Space Complexity O(N) 


class Solution {
public:
   vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set <vector<int>> set;
        vector<vector<int>> v;
        for (auto i = 0; i< n-2; i++ )
        {
            for (auto j = i+1; j< n-1; j++)
            {
               for (auto z = j +1; z< n; z++)
               {
                   if (nums[i] + nums[j] + nums[z] == 0 && i != j && j != z && i != z)
                   {
                       set.insert( { nums[i], nums[j], nums[z]});
                       
                   }
               }
            }
        }
        for(auto it: set)
        v.push_back(it);

        return v;
        
    }
};

// Approach 2 Optimized 
// taking best cases out 
// In this approach, firstly, we will hash the indices of all elements in a hashMap.
// In case of repeated elements, the last occurence index would be stored in hashMap.

/*Here also we fix a number (num[i]), by traversing the loop. But the loop traversal here for fixing numbers would leave 
last two indices. These last two indices would be covered by the nested loop.
If number fixed is +ve, break there because we can't make it zero by searching after it.
Make a nested loop to fix a number after the first fixed number. (num[j])
To make sum 0, we would require the -ve sum of both fixed numbers. Let us say this required.
Now, we will find the this required number in hashMap. If it exists in hashmap and its last occurrence index > 2nd fixed index, 
we found our triplet. Push it in answer vector.
Update j to last occurence of 2nd fixed number to avoid duplicate triplets.
Update i to last occurence of 1st fixed number to avoid duplicate triplets.
Return answer vector.
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());    
        if(nums.size() < 3){    
            return {};
        }
        if(nums[0] > 0){        
            return {};
        }
         unordered_map<int , int> hashMap;
        for(int i = 0 ; i < nums.size() ; ++i){    
            hashMap[nums[i]] = i;
        }
        vector<vector<int>> answer;
        for(int i = 0 ; i < nums.size() ; ++i){     
            if(nums[i] > 0){     
                break;
            }
            if(i > 0 && nums[i] == nums[i - 1]){    
                continue;
            }
            int low = i + 1 , high = nums.size() - 1;   
            int sum = 0;
            while(low < high){                         
                sum = nums[i] + nums[low] + nums[high];
                if(sum > 0){  
                    high--;
                } else if(sum < 0){ 
                    low++;
                } else {
                    answer.push_back({nums[i] , nums[low] , nums[high]});  
                    int last_low_occurence = nums[low] , last_high_occurence = nums[high]; 
                    while(low < high && nums[low] == last_low_occurence){ 
                        low++;
                    }
                    while(low < high && nums[high] == last_high_occurence){
                        high--;
                    }
                }
            }
        }
        return answer;
        
    }
};