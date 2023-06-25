// Approach 1
TC: O(n)
SC: more than O(1)
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans;
        for(int i = 0; i<n; i++)
        {
            int k = nums[i];
            int z = nums[k];
            ans.push_back(z);
        }
        return ans;
    }
};

// Approach2
/*
Lets first see generally what should be done.

1. We need to store 2 values in one place, so we will use math (quotient and remainder)

2. Let, size of array = n
original number = a
final number = b

3. So we will store a = a + n*b

4. On taking a%n, we will get a
On doing a/n, we will get b

5. Here the b that we are using is actually an a and there is a chance that it might be an a that is updated (final number)
To get a from a, we use a%n
So, here it will be b%n

6. Finally, our equation becomes a=a +n(b%n)

7. In the question a=nums[i] and b=nums[nums[i]]

8. So finally, the equation becomes
nums[i] = nums[i] + n * (nums[nums[i]]%n)
*/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        
        int n=nums.size();
        
        for(int i=0;i<n;++i){
            
            nums[i] = nums[i] + n * (nums[nums[i]]%n);
                
        }
        
        for(int i=0;i<n;++i){
            nums[i]/=n;
        }
        
        return nums;
    }
};
//Good space complexity O(1)
// but TC becomes O(nsquare)

// Approach 3
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        
        int n=nums.size();
        
        for(int i=0;i<n;++i){
            
            nums[i] = nums[i] + n * (nums[nums[i]]%n);
                
        }
        
        for(int i=0;i<n;++i){
            nums[i]/=n;
        }
        
        return nums;
    }
};
Best Optimized code till now

