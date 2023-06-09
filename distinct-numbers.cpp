#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, tmp , distinct = 0;
    cin >> n;
    vector<int> v(n, 0);
    
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    tmp = -1;
    for (int i = 0; i < n; i++){
        if(v[i] != tmp){
            distinct++;
        }
        tmp = v[i];
    }

    cout << distinct;
}
