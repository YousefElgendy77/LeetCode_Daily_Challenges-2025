#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        bool ans = true;
        for(int i = 1 ; i < (int)nums.size() ; ++i)
        {
            if((nums[i] & 1 && nums[i-1] & 1) || (!(nums[i] & 1) && !(nums[i-1] & 1)))
            {
                ans = false;
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