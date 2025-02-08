#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int> exist;
        unordered_map<int,int> num_exist;
        vector<int>ans;
        int n = (int)queries.size();
        for(int i = 0 ; i < n ; ++i)
        {
            int a = queries[i][0];
            int b = queries[i][1];
            if(!exist[a])
            {
                exist[a] = b;
                num_exist[b]++;
            }
            else
            {
                num_exist[exist[a]]--;
                if(num_exist[exist[a]] == 0) num_exist.erase(exist[a]);
                exist[a] = b;
                num_exist[b]++;
            }
            ans.push_back((int)num_exist.size());
        }
        return ans;
    }
};
int main()
{
    return 0;
}