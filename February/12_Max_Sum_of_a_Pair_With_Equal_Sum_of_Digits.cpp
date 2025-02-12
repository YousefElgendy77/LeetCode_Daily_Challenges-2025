#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        map<int,pair<int,int>>mp;  // element is the sum of nums[i] and pairs are the biggest two elements that have the same sum
                                   // <9 , {18,36}>
        for(int i = 0 ; i < (int)nums.size() ; ++i)
        {
            int x = nums[i] , sum = 0;
            while(x)
            {
                sum += x % 10;
                x /= 10;
            }
            if(!mp[sum].first) mp[sum].first = nums[i];
            else if(!mp[sum].second) mp[sum].second = nums[i];
            else
            {
                if(nums[i] > mp[sum].first && nums[i] < mp[sum].second) mp[sum].first = nums[i];
                else if(nums[i] < mp[sum].first && nums[i] > mp[sum].second) mp[sum].second = nums[i];
            }
        }
        int ans = -1;
        for(auto x : mp)
        {
            if(x.second.first && x.second.second) ans = max(ans , x.second.first + x.second.second);
        }
        return ans;
    }
};
class Solution {
    public:
        int maximumSum(vector<int>& nums) {   
            map<int,int>mp;    // it stores the sum in the element and the index of the bigges element that have the same sum
            int n = (int)nums.size() , ans = -1;
            for(int i = 0 ; i < n ; ++i)
            {
                int x = nums[i] , sum = 0;
                while(x)
                {
                    sum += x % 10;
                    x /= 10;
                }
                if(mp.find(sum) != mp.end())  
                {
                    ans = max(ans , nums[i] + nums[mp[sum]]);
                    mp[sum] = nums[i] > nums[mp[sum]] ? i : mp[sum];
                }
                else 
                    mp[sum] = i;
            }
            return ans;
        }
    };
int main()
{
    return 0;
}