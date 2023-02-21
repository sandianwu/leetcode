// File Name: 28.cpp
// Author: wuhao
// Created Time: Tue Nov 29 09:22:44 2022

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
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){}
};
class Solution{
public:
    bool check(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) return true;
        if (p == nullptr || q == nullptr || p->val != q->val) return false;
        return check(p->right, q->left) && check(p->left, q->right);
    }
    bool isSymmetric(TreeNode* root){
        if (root == nullptr) return true;
        return check(root->left, root->right);
    }
}
int main(){

    return 0;
}
