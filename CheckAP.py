class Solution:
    
    def checkIsAP(self, arr, n):
        # code here
        arr.sort()
        d=arr[1]-arr[0]
        s=(n/2)*(2*arr[0]+(n-1)*d)
        ans = sum(arr)
        if(s==ans):
            return True
        else:
            return False