arr = [2, 1, 3, 2, 3]

n = len(arr)
from collections import defaultdict
class Solution:
   def countDistinctSubarray(self,arr, n): 
       #code here.
       totalele=len(set(arr))
       # print(n)
       ans=0
       i=0
       j=0
       dp=defaultdict(int)
       while i<n:
           dp[arr[i]]+=1
           print(dp[arr[i]])
           if len(dp)==totalele:
               ans+=n-i
               while j<=i:
                   if dp[arr[j]]==1:
                       print(dp[arr[i]])
                       dp.pop(arr[j])
                       j+=1
                       break
                   else:
                       dp[arr[j]]-=1
                   if len(dp)==totalele:
                       ans+=n-i
                   j+=1
           i+=1
       return ans
        
X=Solution()
print(X.countDistinctSubarray(arr,n))



