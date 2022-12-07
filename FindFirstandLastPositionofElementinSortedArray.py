class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        r=[-1,-1]
        l=0
        h=len(nums)-1
        while(l<=h):
            m=(l+h)//2
            if(nums[m]==target):
                r[0]=m 
                h=m-1
            else:
                if(nums[m]>target):
                    h=m-1
                if(nums[m]<target):
                    l=m+1
        l=0
        h=len(nums)-1
        while(l<=h):
            m=(l+h)//2
            if(nums[m]==target):
                r[1]=m 
                l=m+1
            else:
                if(nums[m]>target):
                    h=m-1
                if(nums[m]<target):
                    l=m+1
        return r