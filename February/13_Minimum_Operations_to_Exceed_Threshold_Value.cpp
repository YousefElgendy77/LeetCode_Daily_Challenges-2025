#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> q(nums.begin(), nums.end());
        int ope = 0;
        while(q.top() < k) 
        {
            long long x = q.top();
            q.pop();
            long long y = q.top();
            q.pop();
            q.push(2*x + y);
            ope++;
        }
        return ope;
    }
};

int main()
{
    return 0;
}