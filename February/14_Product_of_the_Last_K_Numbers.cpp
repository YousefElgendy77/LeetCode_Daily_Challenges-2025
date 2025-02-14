#include <bits/stdc++.h>
using namespace std;
#define ll long long

class ProductOfNumbers {
    vector<ll>nums;
public:
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
       nums.push_back(num); 
       int n = (int)nums.size();
       if(num == 0) nums.assign(n , {});
       else if(n >= 2 && nums[n-2]) nums[n-1] *= nums[n-2];
    }
    
    int getProduct(int k) {
        int n = (int)nums.size() , ans = 0;
        if(n-k >= 0 && nums[n-k] == 0) ans = 0;
        else if(n-k-1 >= 0 && nums[n-k-1]) ans = nums[n-1] / nums[n-k-1];
        else ans = nums[n-1];
        return ans;
    }
};
int main()
{
    return 0;
}