// File Name: 14_1.cpp
// Author: wuhao
// Created Time: Thu Sep 22 08:57:02 2022

#include<vector>
#include<list>
#include<map>
#include<set>
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

using namespace std;
class Solution {
public:
    int cuttingRope(int n){
        vector<int> dp(n + 1);
        dp[1] = 1;
        for (int i = 2; i <= n; ++i){
            int curMax = 0;
            for (int j = 1; j < i ; ++j){
                curMax = max(curMax, max(j * (i - j), dp[j] * (i - j)));
            }
            dp[i] = curMax;
        }
        return dp[n];
    }
};
class Solution1 {
public:
    int cuttingRope(int n){
        //                                 处理余数
        return n <= 3 ? n - 1: pow(3, n/3)*4/(4 - n % 3);
    }
};
int main(){
    Solution s;
    Solution1 s1;
    cout << s1.cuttingRope(10) << endl;
    cout << s.cuttingRope(10) << endl;
    return 0;
}
