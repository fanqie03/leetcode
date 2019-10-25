#include <vector>
#include <map>
using namespace std;

/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    // vector<int> twoSum(vector<int>& nums, int target) {
    //     for(int i = 0; i < nums.size(); i++){
    //         for(int j = i+1; j < nums.size(); j++){
    //             if(nums[i] + nums[j] == target){
    //                 int res[] = {i, j};
    //                 return vector<int> (res, res+2);
    //             }
    //         }
    //     }
    //     return vector<int> ();
    // }

    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> v;
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            int r = target - nums[i];
            if(m.find(r) == m.end()){
                m[nums[i]] = i;
            }else {
                v.push_back(i);
                v.push_back(m[r]);
                break;
            }
        }
        return v;
    }
};
// @lc code=end

