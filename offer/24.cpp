// File Name: 206.cpp
// Author: wuhao
// Created Time: Thu Nov 24 08:02:47 2022

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
    ListNode* next;
    ListNode(int x) : val(x), next(NULL){}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev = nullptr ;
        ListNode* curr = head;
        while (cur) {
            // 存下一个节点
            ListNode* next = curr->next;
            // 当前指回上一个节点
            curr->next = prev;
            // 
            prev = curr;
            curr = next;
        }
        return prev;
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // n_{k+1} 的下一个节点指向 n_k
        // n_k.next.next = n_k
        if (!head || !head->next){
            return head;
        }
        ListNode* newHead = reverseList(head->next);
        head->next->next = head; // head is n_k
        head->next = nullptr;  // n_k->next no use
        return newHead;
    }
}

int main(){

    return 0;
}
