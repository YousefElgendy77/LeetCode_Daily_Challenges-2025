#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        int n = (int)s.size();
        string ans = "";
        for(int i = n-1 ; i >= 0 ; --i)
        {
            if(s[i] >= 'a' && s[i] <= 'z') ans += s[i];
            else if(s[i] >= '0' && s[i] <= '9')
                for(int j = i-1 ; j >= 0 ; --j)
                    if(s[j] >= 'a' && s[j] <= 'z')
                    {
                        s[j] = '#';
                        break;
                    }
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};
int main()
{
    return 0;
}