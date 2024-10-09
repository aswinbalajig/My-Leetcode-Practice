// leetcode 3. Longest Substring Without Repeating Characters

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int rear=0;int front=0;
        int charArr[255]={0};
        int currcount=0;int maxcount=0;
        while(rear<s.length() && front<s.length())
        {   
            if(charArr[s[rear]]==1)
            {   charArr[s[front]]-=1;
                front++;
                //currcount=(rear-front)+1;
                currcount-=1;

            }
            else
            {
                charArr[s[rear]]+=1;
                //currcount=(rear-front)+1;
                currcount+=1;               
                rear++;
                maxcount=max(maxcount,currcount);

            }
        }
        return maxcount;
    }
};

int main()
{
    Solution sol;
    cout<<sol.lengthOfLongestSubstring("pwwkew");
    return 0;
}