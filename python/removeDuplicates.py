#解题思路：双指针，同时使用python时还要避免使用for循环写死循环截止条件
from typing import List

def removeDuplicates(nums: List[int]) -> int:
    i = 0
    j = 1
    while j < len(nums):
        if nums[i] == nums[j]:
            del nums[j]
        else:
            i += 1
            j = i+1
                 
    print(nums)
    return len(nums)

if __name__ == '__main__':
    removeDuplicates([0,0,1,1,1,2,2,3,3,4])