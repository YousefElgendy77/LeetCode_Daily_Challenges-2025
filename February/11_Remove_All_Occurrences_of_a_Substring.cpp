#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        auto it = s.find(part);
        while(it != string::npos)
        {
            s.erase(it,part.size());
            it = s.find(part);
        }
        return s;
    }
};
int main()
{
    return 0;
}