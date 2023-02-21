// File Name: 29.cpp
// Author: wuhao
// Created Time: Fri Dec  2 08:23:44 2022

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

class Solution1 {
private:
    static constexpr int dir[4][2] = {{0,1}, {1,0}, {0,-1},{-1,0}};
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0) return {};
        int rows = matrix.size(), columns = matrix[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(columns));
        int total = rows * columns;
        vector<int> order(total);

        int row = 0, column = 0;
        int dirIndex = 0;
        for (int i = 0; i < total; ++i){
            order[i] = matrix[row][column];
            visited[row][column] = true;
            int nextRow = row + dir[dirIndex][0], nextColumn = column + dir[dirIndex][1];
            if (nextRow < 0 | nextRow >= rows || nextColumn < 0 || nextColumn >= columns || visited[nextRow][nextColumn]){
                dirIndex = (dirIndex + 1) % 4;
            }
            row += dir[dirIndex][0];
            column += dir[dirIndex][1];
        }
        return order;
    }
};

class Solution2 {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0) return {};
        int rows = matrix.size(), columns = matrix[0].size();
        vector<int> order;
        int left = 0, right = columns - 1, top = 0, bottom = rows - 1;
        while (left <= right && top <= bottom) {
            for (int c = left; c <= right; c++){
                order.push_back(matrix[top][c]);
            }
            for (int r = top + 1; r <= bottom; r++){
                order.push_back(matrix[r][right]);
            }
            if (left < right && top < bottom) {
                for (int c = right - 1; c > left; c--){
                    order.push_back(matrix[bottom][c]);
                }
                for (int r = bottom; r > top; r--){
                    order.push_back(matrix[r][left]);
                }
            }
            left++;
            right--;
            top++;
            bottom--;
        }
        return order;
    }
};
int main(){
    Solution2 s2;
    Solution1 s1;
    vector<vector<int>> a = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> b;
    b = s2.spiralOrder(a);
    for (auto i : b) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
