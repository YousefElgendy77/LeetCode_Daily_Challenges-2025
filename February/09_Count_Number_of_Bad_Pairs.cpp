#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>notBad;
        int n = (int)nums.size() ;
        long long ans = 0;
        for(int i = 0 ; i < n ; ++i)
        {
            nums[i] -= i;
            notBad[nums[i]]++;
        }    
        for(int i = 0 ; i < n ; ++i)
        { 
            int res = 0;
            if(notBad[nums[i]] > 1) res = notBad[nums[i]] - 1;
            ans += (n-i-1) - res;
            notBad[nums[i]]--;
        }
        return ans;
    }
};
int main()
{
    return 0;
}