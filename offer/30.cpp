// File Name: 30.cpp
// Author: wuhao
// Created Time: Mon Dec  5 07:52:31 2022

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
class MinStack{
    stack<int> x_stack;
    stack<int> m_stack;
public:
    MinStack(){
        m_stack.push(INT_MAX);
    }
    void push(int x) {
        x_stack.push(x);
        m_stack.push(::min(m_stack.top(), x));
    }
    void pop(){
        x_stack.pop();
        m_stack.pop();
    }
    int top(){
        return x_stack.top();
    }
    int min(){
        return m_stack.top();
    }

};
int main(){

    return 0;
}
#include<set>
#include<map>
