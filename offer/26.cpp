// File Name: 26.cpp
// Author: wuhao
// Created Time: Mon Nov 28 09:08:41 2022

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
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if (!A || !B) return false;
        if (A->val == B->val && isContain(A, B)) {
            return true;
        } else {
            return isSubStructure(A->left, B) || isSubStructure(A->right, B);
        }
    }
    bool isContain(TreeNode* A, TreeNode* B){
        if (B == nullptr) return true;
        if (A == nullptr || A->val != B->val) return false;
        return isContain(A->left, B->left) && isContain(A->right, B->right);
    }
};
int main(){

    return 0;
}
