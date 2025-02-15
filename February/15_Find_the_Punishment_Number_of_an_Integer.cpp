#include <bits/stdc++.h>
using namespace std;

class Solution {   // Bitmasking solution
public:
    int punishmentNumber(int n) {
        int ans = 0;
        for(int k = 1 ; k <= n ; ++k)
        {
            string s = to_string(k*k);
            int sz = (int)s.size();
            for(int i = 0 ; i < (1 << sz-1) ; ++i)
            {
                int sum = 0;
                int num = s[0] - '0';
                for(int j = 0 ; j < sz-1 ; ++j)
                {
                    if((1 << j) & i) 
                    {
                        sum += num;
                        num = s[j + 1] - '0';
                    } 
                    else 
                        num = num * 10 + (s[j + 1] - '0');
                }
                sum += num;
                if(sum == k)
                {
                    ans += k*k;
                    break;
                }
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}