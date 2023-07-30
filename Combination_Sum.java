import java.util.ArrayList;
import java.util.List;

public class Combination_Sum{

    class Solution {
    List<List<Integer>> ans = new ArrayList<>();
    ArrayList <Integer> ls = new ArrayList<>();
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        cum(candidates, target, 0);
        return ans;
    }

    public void cum(int[] candidates, int target, int start)
    {
        if(target == 0)
        {
            ans.add(new ArrayList<>(ls));
            return; // backtrack
        }
    

        for(int i = start; i< candidates.length; i++)
        {
            if(candidates[i] <= target)
            {
                ls.add(candidates[i]);
                cum(candidates, target - candidates[i], i);
                ls.remove(ls.size() -1);
            }
        }
    }
}
}

// Time Complexity --> O(2 ^ N)
// Space Complexity ---> O(2 ^ N)
// Concepts used ---> Backtracking and recursion 
/*
   Approach
   1. The code follows a backtracking approach to find all combinations that sum up to the given target.
   2. The combinationSum method is the entry point for the backtracking process. It initializes the ans 
      list to store the result and the ls list to track the current combination.
   3. The cum method performs the backtracking. It takes the current array cpmbinations, the remaining target value, 
      and the starting index as parameters.
   4. The base case is when the target value becomes zero. In this case, it means that the current combination in ls 
      sums up to the target. Therefore, a copy of ls is added to the ans list as a valid combination.
   5. The for loop iterates through the elements in the c array, starting from the given index start.
   6. Within the loop, if the current element combinations[i] is less than or equal to the remaining target, it is a 
      valid candidate to include in the combination.
   7. The element combinations[i] is added to the ls list, and the cum method is recursively called with the updated 
      target (subtracting combinations[i]) and the same starting index i to allow reusing the same element in subsequent
      combinations.
   8. After the recursive call, the last element is removed from ls using ls.remove(ls.size() - 1). This step is crucial 
      for backtracking, as it ensures that the correct elements are considered for the next iteration of the loop.
   9. The process continues with the next element in the loop until all combinations have been explored.

 */
