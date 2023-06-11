class Solution {
public:
    bool isPalindrome(string s) {
        
        int start = 0;
        int end = s.size();

       while(start<=end)
       {
           if(!isalnum(s[start])){start++; continue;}
           if(!isalnum(s[end])){end--; continue;}
           if(tolower(s[start])!= tolower(s[end])) 
           return false;
           else
           {start++;
           end--;}
       }
       return true;
    }
};

/*
Approach
If a character is not alphanumeric we can simply ignore it and update our pointer to next character (for both pointers)

and then we check by converting the alphanumeric character to lowercase (tolower() function on numbers has no change)
if those two are not equal then return false(not palindrome)
else update both pointers and continue.

Finally after all checking if reach at last then string must be a valid palindrome so return true.

Complexity
Time complexity:O(n)O(n)O(n)
Space complexity:O(1)O(1)O(1) since only use two pointers
*/