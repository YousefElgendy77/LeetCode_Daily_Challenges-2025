#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int res = 0;
        bool ans = true;
        for(int i = 0 ; i < (int)s1.size() ; ++i)
        {
            if(s1[i] != s2[i])
                res++;
        }
        if(res > 2)
            ans = false;
        else
        {
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1 != s2)
                ans = false;
        }
        return ans;
    }
};

int main()
{
    return 0;
}