#include <string>
using namespace std;

/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    // TODO bug
    // int reverse(int x) {
    //     string a = to_string(abs(x));
    //     int sign = x >= 0? 1:-1;
    //     for(int i = 0; i < a.size()/2; i++){
    //         char t = a[i];
    //         a[i] = a[a.size() - 1 - i];
    //         a[a.size() - 1 - i] = t;

    //     }
    //     long l = stol(a);
    //     if (l > 0x7fffffff || l < int(0x80000000)){
    //         return 0;
    //     }
    //     return sign * int(l);
    // }

    int reverse(int x){
        int max = 0x7fffffff, min=0x80000000;
        long r=0;
        for(;x!=0;r*=10, r+=x%10,x/=10);
        return (r > max || r < min) ? 0 : r;
    }
};
// @lc code=end

