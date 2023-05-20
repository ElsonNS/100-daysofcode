class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
                count++;
            }
            else{
                if(st.size() == 0) return false; 
                char ch = st.top();
                st.pop();
                if( s[i]==')' && ch =='(' ||   s[i]==']' && ch =='[' ||  s[i]=='}' && ch =='{'){ 
                }
                else{
                    return false;
                }
                count--;
            }
        }
        if(count!=0){
            return false;
        }
    return true;
    }
};