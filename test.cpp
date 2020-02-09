#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 2, 3, 4, 45};

    map<int, vector<pair<int, int>>> cache;
    for (auto a = nums.begin(); a < prev(nums.end()); a++){
        for (auto b = a + 1; b < nums.end(); b++){
            cache[*a + *b].push_back(pair<int, int>)
        }
    }
}