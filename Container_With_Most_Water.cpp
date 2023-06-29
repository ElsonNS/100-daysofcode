class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i =0; 
        int start = i;
        int end = n-1-i;
        int maxarea, area;
        if (height[start] >= height[end])
        {
            maxarea = height[end] * (end-start) ;
            end --;
        }
        else
        {
            maxarea = height[start] * (end-start);
            start ++;
        }
        if (n==2)
        {
            return maxarea;
        }
        else
        {
            while (start <end)
            {
                if (height[start] >= height[end])
                {
                    area = height[end] * (end-start) ;
                    end --;
                }
                else
                {
                    area = height[start] * (end-start);
                    start ++;
                }
                if (area > maxarea)
                {
                    maxarea = area;
                }
            }
        }

        return maxarea;
    }
};