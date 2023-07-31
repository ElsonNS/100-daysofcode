public class Value_of_Variable_After_Performing_Operations {
    public static void main(String[] args) {
        //Approach 1
        class Solution {
            public int finalValueAfterOperations(String[] operations) {
                int X = 0;
                for (int i= 0; i<operations.length; i++)
                {
                    if(operations[i].equals("--X") || operations[i].equals("X--"))
                    {
                        X=X-1;
                    }
                    else if(operations[i].equals("++X") || operations[i].equals("X++"))
                    {
                        X=X+1;
                    }
                }
                return X;
            }
        }
    }
}

//Approach 2
class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int X = 0;
        for(String o: operations) {X += (44 - o.charAt(1));}
        return X;
    }
}
/*In any case (suffix or prefix), any operation will have its main operation 
"identifier" (plus or minus) in the middle. Since every character has an equivalent
 integer value, and related characters have close int values, we can use it. 
 The plus character (+) is equal to 43, and the minus character (-) is equal to 45. 
 Therefore, x += 44 - middle operation character; if it's plus, it will be 
 x += 44 - 43 (1); if it's minus, it will be x += 44 - 45 (-1) */
