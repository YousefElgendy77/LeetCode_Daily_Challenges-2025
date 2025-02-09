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
            if(notBad[nums[i]] > 1) res = notBad[nums[i]] - 1; // count the bad good pairs
            ans += (n-i-1) - res;        // subtract good bairs from bad pairs
            notBad[nums[i]]--;
        }
        return ans;
    }
};
int main()
{
    return 0;
}

// class Solution {
//     public:
//         long long countBadPairs(vector<int>& nums) {
//             int n = (int)nums.size();
//             long long ans = 0;
//             unordered_map<int, int> occ;       // good pairs so Far
//             for (int i = 0; i < n; ++i) {
//                 int cur = i - nums[i];         // current pair
//                 ans += i - occ[cur];           // ans += bad pairs so Far
//                 occ[cur]++; 
//             }
//             return ans;
//         }
// };