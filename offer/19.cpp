// File Name: 19.cpp
// Author: wuhao
// Created Time: Wed Nov  9 11:49:52 2022

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
    bool isMatch(string s, string p){
        return isMatch(s.c_str(), p.c_str());
    }
private:
    bool isMatch(const char *s, const char *p){
        if (*p == '\0') return *s == '\0'; // 终止条件
        // next char is not '*'
        if (*(p + 1) != '*') {
            if (*p == *s || (*p == '.' && *s != '\0')) { // 一次匹配
                return isMatch(s + 1, p + 1);
            } else {
                return false;
            }
        } else { // next char is '*'
            while (*p == *s || (*p == '.' && *s != '\0')) {
                if (isMatch(s, p+2)) // '*' 前后字符相同没有意义，跳过，返回true。
                    return true;
                s++;
            }
            return isMatch(s, p + 2); // 返回'*'后的匹配
        }
    }
};
int main(){
    Solution s;
    string a = "aab", b = "c*a*b";
    cout << s.isMatch(a, b) << endl;
    cout << '\0' << endl; // 空

    return 0;
}
