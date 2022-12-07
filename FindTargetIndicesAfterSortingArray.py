class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        nums.sort()
        M=0
        N=-1
        l=0
        h=len(nums)-1
        while(l<=h):
            m=(l+h)//2
            if(nums[m]==target):
                M=m 
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
                N=m 
                l=m+1
            else:
                if(nums[m]>target):
                    h=m-1
                if(nums[m]<target):
                    l=m+1
        k=[]
        for i in range(M,N+1):
            k.append(i)
        return k