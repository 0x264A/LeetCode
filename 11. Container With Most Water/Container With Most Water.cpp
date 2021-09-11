// Given n non-negative integers a1, a2, ..., an ,where each represents a point at coordinate (i, ai).
// n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). 
// Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

class Slow_Solution {
public:
    int maxArea(vector<int>& height) {

        int mostWater = 0;
        int m = 0;
        for(int i =0; i< height.size(); i++) {
            for(int j = i+1; j < height.size();j++) {
                m = min(height[i],height[j]);
                if((j-i)*m > mostWater) 
                {
                    mostWater = (j-i)*m;
                }
            }
        }
        return mostWater;
        
    }
};

class Fast_Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int L = 0;
        int R = height.size()-1;
        
        while(L < R) {
            if ( min(height[L],height[R]) * (R-L) > maxWater) {
                maxWater = min(height[L],height[R]) * (R-L);
            }
            if(height[L] > height[R]) {
                R--;
            }
            else
            {
                L++;
            }
        }
        return maxWater;
    }
};

