from typing import List

def removeDuplicates(nums: List[int]) -> int:
    nums_len = len(nums)
    for i in range(len(nums)-1):
        for j in range(1,len(nums)):
            if nums[i] == nums[j]:
                del nums[j]
                nums_len -= 1
    return len(nums)

if __name__ == '__main__':
    removeDuplicates([1,1,2])