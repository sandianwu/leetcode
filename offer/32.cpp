// File Name: 32.cpp
// Author: wuhao
// Created Time: Tue Dec 13 08:25:52 2022

#include<vector>
#include<list>
#include<unordered_set>
#include<unordered_map>
#include<deque>
#include<queue>
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
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution1 {
public:
    vector<int> levelOrder(TreeNode* root){
// wrong 优先左支
        vector<int> res;
        levelOrder(root, res);
        return res;
    }
private:
    void levelOrder(TreeNode* root, vector<int>& res){
        if (root == nullptr) return ;
        res.push_back(root->val);
        levelOrder(root->left, res);
        levelOrder(root->right, res);
    }
};
class Solution2 {
public:
    // 队列里只有左和右。
    vector<int> levelOrder(TreeNode* root){
        vector<int> res;
        if (!root) return res;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            auto node = q.front();
            q.pop();
            res.push_back(node->val);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        return res;
    }
};
int main(){
    Solution1 s1;
    Solution2 s2;
    TreeNode* a = new TreeNode(1);
    a->right = new TreeNode(2);
    a->right->left = new TreeNode(3);
    vector<int> b;
    //b = s1.levelOrder(a);
    b = s2.levelOrder(a);
    for (auto i : b) {
        cout << i << "; ";
    }
    cout << endl;
    return 0;
}
