#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for( int i : nums)
        {
            res^=i;
        }
        return res;
    }
};

int main()
{   Solution sol;
vector<int> nums={4,1,2,1,2};
    cout<<sol.singleNumber(nums);
    return 0;
}