#include<bits/stdc++.h>

int largestElement(std::vector<int>& nums) 
{
    int max=nums[0], s_max = -1;
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i] >= max) 
        {
            if(nums[i] == max) continue;
            s_max = max;
            max = nums[i];

        }
        else
        {
            if(nums[i] >s_max) s_max = nums[i];
        }
    }

   return s_max;     

}


int main()
{
    
}