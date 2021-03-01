from typing import List

def removeDuplicates(nums: List[int]) -> int:
    nums_len = len(nums)
    i = 0
    j = 1
    while j < len(nums):
        if nums[i] == nums[j]:
            del nums[j]
        else:
            i += 1
            j = i + 1
                 
    print(nums)
    return len(nums)

if __name__ == '__main__':
    removeDuplicates([0,0,1,1,1,2,2,3,3,4])