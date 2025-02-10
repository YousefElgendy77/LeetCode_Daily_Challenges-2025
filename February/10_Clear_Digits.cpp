#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        string stack = "";
        for (char c : s) 
            if (isdigit(c)) 
            {
                    if (!stack.empty())    // Remove the closest non-digit character if the stack is not empty
                    stack.pop_back();
            } 
            else
                stack.push_back(c);
        
        return stack;
    }
};
int main()
{
    return 0;
}