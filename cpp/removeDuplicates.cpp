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

