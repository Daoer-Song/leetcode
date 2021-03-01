from typing import List

def removeDuplicates(nums: List[int]) -> int:
    nums_len = len(nums)
    for i in range(nums_len-1):
        for j in range(1,nums_len):
            if nums[i] == nums[j]:
                del nums[j]
                nums_len -= 1
    return len(nums)

if __name__ == '__main__':
    removeDuplicates([1,1,2])