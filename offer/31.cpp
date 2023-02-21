// File Name: 31.cpp
// Author: wuhao
// Created Time: Tue Dec  6 08:29:21 2022

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

using namespace std;
class Solution{
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& poped){
        stack<int> st;
        int n = pushed.size();
        for (int i = 0, j = 0; i < n; ++i){
            st.emplace(pushed[i]);
            while (!st.empty() && s.top() == poped[j]){
                st.pop();
                j++;
            }
        }
        return st.empty();
    }
};
int main(){

    return 0;
}
