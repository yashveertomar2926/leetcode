class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        repeated = set()

        for num in nums:
            if num in repeated:
                return num
            repeated.add(num)

        return -1