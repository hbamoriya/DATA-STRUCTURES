////given is the main function only for learning purpose , hoping main code can be wriiten out easily ///


#include<bits/stdc++.h>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            nums[i] = nums[i]*nums[i];
        }
       vector<int>result(nums.size(),0);
        int index = nums.size()-1;
        int l=0 , r  = nums.size()-1;
        while(l<=r)
        {
            if(nums[l]<=nums[r])
            {
                result[index] = nums[r];
                r--;
            }
            else if(nums[l]>=nums[r])
            {
                result[index] = nums[l];
                l++;
            }
            index--;
        }
        return result ;
    }
};
