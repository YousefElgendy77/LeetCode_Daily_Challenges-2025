#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = nums[0] , maxSum = 0;
        for(int i = 1 ; i < (int)nums.size() ;++i)
        {
            if(nums[i] > nums[i-1])
                sum += nums[i];
            else
            {
                maxSum = max(maxSum , sum);
                sum = nums[i];
            }
        }
        maxSum = max(maxSum , sum);
        return maxSum;
    }
};


int main()
{
    return 0;
}
