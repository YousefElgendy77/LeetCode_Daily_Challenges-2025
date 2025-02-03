#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        bool ans = true;
        int sz = (int)nums.size();
        for(int i = 1 ; i < sz ; ++i)
        {
            if(nums[i] < nums[i-1])
            {
                int ref = nums[0];
                for(int j = i ; j < sz-1; ++j)
                {
                    if(nums[j] <= nums[j+1] && nums[j] <= ref)
                    {
                        continue;
                    }
                    else 
                    {
                        ans = false;
                        break;
                    }
                }
                if(nums[sz-1] > ref) ans = false;
                break;
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}