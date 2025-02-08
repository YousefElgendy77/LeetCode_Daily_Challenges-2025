#include <bits/stdc++.h>
using namespace std;

class NumberContainers {
    map<int,set<int>> filled;
    map<int,int>idx;
public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(idx[index])
        {
            int removed_index = idx[index];
            filled[removed_index].erase(index);
        }
        filled[number].insert(index);
        idx[index] = number;
    }
    
    int find(int number) {
        if(filled[number].empty()) return -1;
        else return *filled[number].begin();
    }
};

int main()
{
    return 0;
}