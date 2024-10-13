#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingWeight(int n) {
        int res=0;
        while(n)
        {   
            if(n%2==1)
            res++;
            n=n>>1;
        }
        return res;
    }
};

int main()
{   
    Solution sol;
    cout<<sol.hammingWeight(2147483645);
    return 0;

}