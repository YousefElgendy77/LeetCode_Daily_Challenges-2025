#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = (int)nums.size();
        int ans_for_decreasing = 1 , ans_for_increasing = 1;
        int res = 0;
        for(int i = 1 ; i < n ; ++i)
        {
            if(nums[i] > nums[i-1])
            {
                ans_for_increasing++;
            }
            else
            {
                res = max(ans_for_increasing , res);
                ans_for_increasing = 1;
            }
        }
        res = max(ans_for_increasing , res);
        for(int i = 1 ; i < n ; ++i)
        {
            if(nums[i] < nums[i-1])
            {
                ans_for_decreasing++;
            }
            else
            {
                res = max(ans_for_decreasing , res);
                ans_for_decreasing = 1;
            }
        }
        res = max(ans_for_decreasing , res);
        return res;
    }
};

int main()
{
    return 0;
}