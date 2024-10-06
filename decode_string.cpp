

//Leetcode problem 394.Decode String


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    std::string decodeString(string s) {
        vector<string> stack;
        int number=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=']')
            {    
                    string g="";
                    g+=s[i];//converting a single string element  as a string itself 
                    stack.push_back(g);
                
            }
            else
            {   string substring="";
                
                while(stack.size()>0 && stack.back()!="[")
                {   
                    int i=stack.size()-1;
                    substring=stack[i]+substring;
                    stack.pop_back();
                }
                stack.pop_back();
                string stringNumber;
                while(stack.size()>0 && stack.back()[0]>='0' && stack.back()[0]<='9')
                {   
                    stringNumber=stack.back()+stringNumber;
                    stack.pop_back();
                }
                string finalstring="";
                for(char c:stringNumber)
                number=number*10+(c-'0');
                for(int i=0;i<number;i++)
                {
                    finalstring+=substring;
                }
                stack.push_back(finalstring);
                number=0;

            }
        }

        string returnString="";
        for(int i=0;i<stack.size();i++)
        returnString+=stack[i];
        return returnString;

}
};

int main()
{
    Solution sol;
    string inputs[3]={"3[a]2[bc]","3[a2[c]]","2[abc]3[cd]ef"};
    for( auto input:inputs)
    {
        cout<<sol.decodeString(input)<<"\n";
    }
    return 0;
}