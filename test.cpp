#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1, 2, 2, 3, 4, 4};

    for (vector<int>::iterator i = a.begin(); i < unique(a.begin(), a.begin() + a.size()); i++){
        cout<<*i;
    }
    getchar();
    return 0;
    
}