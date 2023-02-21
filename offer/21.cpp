// File Name: 21.cpp
// Author: wuhao
// Created Time: Tue Nov 22 08:16:48 2022

#include<vector>
#include<list>
#include<unordered_set>
#include<unordered_map>
#include<deque>
#include<stack>
#include<bitset>
#include<algorithm>
#include<functional>
#include<numeric>
#include<utility>
#include<sstream>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<set>
#include<map>

using namespace std;
class Solution1{
public:
    vector<int> exchange(vector<int>& nums){
        int n = nums.size();
        vector<int> res(n);
        int left = 0, right = n - 1;
        for (auto &num : nums){
            if (num % 2 == 1){
                res[left++] = num;
            } else {
                res[right--] = num;
            }
        }
        return res;
    }
};
class Solution2{
public:
    vector<int> exchange(vector<int>& nums){
        int left = 0, right = nums.size() - 1;
        while (left < right){
            while (left < right && nums[left] % 2 == 1) {
                // 循环直到偶数。
                left++;
            }
            while (left < right && nums[right] % 2 == 0) {
                // 循环直到奇数。
                right--;
            }
            if (left < right){
                // 交换奇偶数
                swap(nums[left++], nums[right--]);
            }
        }
        return nums;
    }
};
int main(){
    Solution2 s2;
    Solution1 s1;
    vector<int> a = {1,2,3,4};
    vector<int> b;
    b = s1.exchange(a);
    for (auto &i : b){
        cout << i << " ";
    }
    cout << endl;
    b = s2.exchange(a);
    for (auto &i : b){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
