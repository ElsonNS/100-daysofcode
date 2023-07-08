//Approach 1
class Solution {
public:
    int smallestEvenMultiple(int n) {
        int evenmultiple;
       if (n % 2 == 0)
       {
          evenmultiple = n;
       } 
       else
       {
           evenmultiple = n*2;
       }
       return evenmultiple;
    }
};

//Approach 2
class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n % 2 == 0 ? n: n*2;
    }
};

//Approach 3
/* The problem is asking for the smallest even multiple of a given number n. To find the solution, we can utilize the concept of greatest common divisor (GCD) and the property that the product of two numbers divided by their GCD gives their least common multiple (LCM). Since we are looking for the smallest even multiple, we can simply multiply n by 2 and divide it by the GCD of n and 2. so the overall time complexity is O(log n).
*/
class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n*2)/gcd(n,2);
    }
};

// Optimial Solution