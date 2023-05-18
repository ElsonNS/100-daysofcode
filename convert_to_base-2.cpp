class Solution {
public:
    string baseNeg2(int n) {
        if (n == 0)
        {
            return string("0");
        }
        string bin;
        int const base = -2;
        while (n!=0)
        {
            int rem = n%2;
            if (rem ==0)
            {
                bin.push_back('0');
                n = n/ base;
            }
            else
            {
                bin.push_back('1');
                n = (n-1)/base;
            }
        }
        reverse(bin.begin(), bin.end());
        return bin;
        
    }
};