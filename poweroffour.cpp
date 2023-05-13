class Solution {
public:
    bool isPowerOfFour(int n) {
        
        for (int i = 0; i<= 15; i++)
        {
            int a = pow(4, i);
            if (a == n)
            {
                return true;
            }
        }
        return false;
    }
};