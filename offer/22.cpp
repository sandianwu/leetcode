// File Name: 22.cpp
// Author: wuhao
// Created Time: Wed Nov 23 09:33:59 2022

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
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};

class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        // 双指针，前一个指针从k开始。
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast && k > 0) {
            fast = fast->next;
            k--;
        }
        while (fast){
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};

int main(){

    return 0;
}
