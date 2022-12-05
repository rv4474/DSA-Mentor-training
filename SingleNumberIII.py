class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        a = set(nums)
        b = a.copy()
        for n in nums:
            if n in a:
                a.remove(n)
                continue
            if n in b: b.remove(n)
        return list(b)

