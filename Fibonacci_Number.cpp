//Approach 1

class Solution {
public:
    int fib(int n) {
        if (n < 2)
        {
            return n;
        }
        else
        {
            return fib(n-2)+fib(n-1);
        }

    }
};

//Approach 2   more optimized
class Solution {
public:
    int fib(int n) {
        return fun(n);
    }
    int fun(int n)
    {
        if(n <= 1) return n;
        int last = fun(n-1);
        int slast = fun(n-2);
        return last + slast;
    }
};