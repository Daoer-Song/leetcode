#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i = 0, j;
        for(j=1; j<nums.size();j=i+1)
        {
            if(nums[i] == nums[j])
            {
                nums.erase(nums.begin()+j);
            }
            else
            {
                i += 1;
            }
        }
        for (unsigned i=0; i < nums.size(); ++i)
            cout << ' ' << nums[i];
        cout << '\n' ; 

        return nums.size();
    }
};

int main()
{
    int new_length;
    Solution solver;
    vector<int> nums = {1,1,2};
    new_length = solver.removeDuplicates(nums);
    
    return 0;
}

// 利用vector的函数
// unique是去重函数将相邻且重复的元素放到vector的尾部 注意 这里并没有删除元素 然后返回指向第一个重复元素的迭代器 再用erase函数擦除从这个元素到最后元素的所有的元素 之后返回数组长度 其实一行也可以实现，这不比博人传热血？


// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//     //sort(nums.begin(), nums.end());
//     nums.erase(unique(nums.begin(), nums.end()), nums.end());
//     return nums.size();
//     }
// };