class Solution(object):
    def minWindow(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        sCharCount,tCharCount={},{}
        front=0
        res=[-1,-1]
        if s=='' or t=='':
            return ''
        if s==t:
            return s
        maxlen=float('infinity')
        for rear in range(0,len(t)):
            tCharCount[t[rear]]=tCharCount.get(t[rear],0)+1
        have,need=0,len(tCharCount)
        for rear in range(0,len(s)):
            sCharCount[s[rear]]=sCharCount.get(s[rear],0)+1
            if s[rear] in tCharCount and tCharCount[s[rear]]==sCharCount[s[rear]]:
                have+=1
            while have==need:
                if(rear-front+1)<maxlen:
                    maxlen=rear-front+1
                    res=[front,rear]
                sCharCount[s[front]]-=1
                if s[front] in tCharCount and sCharCount[s[front]]<tCharCount[s[front]]:
                    have-=1
                front+=1
        if maxlen!=float('infinity'):
            return s[res[0]:res[1]+1]
        else:
            return ''
    

sol=Solution()
print(sol.minWindow("ADOBECODEBANC","ABC"))
