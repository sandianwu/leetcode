// File Name: 17.cpp
// Author: wuhao
// Created Time: Mon Nov  7 07:52:24 2022

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
class Solution{
public:
    vector<int> printNumbers(int n){
        int max = 1;
        for (int i = 0; i < n; ++i){
            max = 10 * max;
        }
        --max;
        vector<int> res(max);
        for (int i = 0; i < max; ++i){
            res[i] = i + 1;
        }
        return res;
    }
};
int main(){
    Solution s;
    vector<int> a ;
    a = s.printNumbers(2);
    for (auto i : a){
        cout << i << "; ";
    }
    cout << endl;
    return 0;
}
