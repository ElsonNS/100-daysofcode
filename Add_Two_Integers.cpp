class Solution {
public:
    int sum(int num1, int num2) {
        int sum =0;
        if(num1 >=0 && num2 >=0)
        {
            sum = num1 + num2;
           
        }
        else if(num1 < 0 && num2 <0)
        {
            num1 *= (-1);
            num2 *= (-1);
            sum = (num1 +num2)*(-1);
        }
        else if(num1<0)
        {
            num1 *= (-1);
            if(num1>num2)
            {
                sum = (num1-num2) *(-1);
               
            }
            else
            {
                sum = (num2-num1);
               
            }
            
        }
        else if(num2<0)
        {
            num2 *= (-1);
            if(num1>num2)
            {
                sum = (num1-num2) ;
            }
            else
            {
                sum = (num2-num1) * (-1);
            }
            
        }
        return sum;
        
    }
};