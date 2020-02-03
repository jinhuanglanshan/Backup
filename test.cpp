#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1, 2, 2, 3, 4, 45};

    auto i = a.end();
    printf("%d", *prev(i, 2));
    getchar();
    return 0;
    
}