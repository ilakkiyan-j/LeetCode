class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        zero_count= nums.count(0)
        product = prod(num if num != 0 else 1 for num in nums[:n])
        if zero_count ==1:
            return [product if num ==0 else 0 for num in nums[:n]]
        elif zero_count > 1:
            return [0 for _ in nums]
        else:
            return [product // num for num in nums[:n]]

      


        