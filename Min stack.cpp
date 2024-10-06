//Leetcode 155. Min Stack


#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
    vector<int> nums;
    map<int,int> minmap;
    MinStack() {
        nums={};
        
    }
    
    void push(int val) {
        nums.push_back(val);
        if(nums.size()==1)
        minmap[0]=val;
        else
        minmap[nums.size()-1]=min(val,minmap[nums.size()-2]);
        
    }
    
    void pop() {
        minmap.erase(nums.size()-1);
        cout<<"\n"<<"map:";
        for(auto m:minmap)
        cout<<m.first<<":"<<m.second<<"\n";
        nums.pop_back();
    }
    
    void top() {
         cout<<nums.back()<<" ";
    }
    
    void getMin() {
        
        cout<<minmap[nums.size()-1]<<" ";
    }
};

int main()
{
    MinStack obj;
    //["MinStack","push","push","push","push","getMin","pop","getMin","pop","getMin","pop","getMin"]
    //[[],[2],[0],[3],[0],[],[],[],[],[],[],[]]
    obj.push(2);obj.push(0);obj.push(3);obj.push(0);
    obj.getMin();obj.pop();obj.getMin();obj.pop();obj.getMin();obj.pop();obj.getMin();
    
    
}