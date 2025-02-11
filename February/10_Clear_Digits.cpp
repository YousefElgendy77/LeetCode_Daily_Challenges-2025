#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        string stack = "";
        for (char c : s) 
            if (isdigit(c)) 
            {
<<<<<<< HEAD
                if (!stack.empty())    // Remove the closest non-digit character if the stack is not empty
=======
                    if (!stack.empty())    // Remove the closest non-digit character if the stack is not empty
>>>>>>> 1de3dbcc7bc88b86fa601a90598dc276966377d7
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