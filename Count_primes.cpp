class Solution {
public:
    int countPrimes(int n) {
       vector<bool> prime(n, true);

       int count =0;
       for (auto i = 2; i*i<n; i++)
       {
           if(prime[i] == true)
           {
               for(auto j = i*i; j <n; j +=i)
               {
                   prime[j] = false;
               }
           }
       }
       for(int i = 0; i<n; i++)
       {    prime[0] = false;
            prime[1] = false;
           if(prime[i] == true){count++;}
       }
       return count;
              
    }
};