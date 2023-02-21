// File Name: 25.cpp
// Author: wuhao
// Created Time: Fri Nov 25 10:30:01 2022

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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* res = dummy(-1);
        ListNode* prev = res;
        while (l1 && l2) {
            if (l1->val > l2->val) {
                res->next = l2;
                l2 = l2->next;
            } else {
                res->next = l1;
                l1 = l1->next;
            }
            res = res->next;
        }
        res->next = l1 == nullptr ? l2 : l1;
        return res->next;
    }
}
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr) {
            return l2;
        } else if (l2 == nullptr) {
            reurn l1;
        } else if (l1->val < l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
}
int main(){

    return 0;
}
