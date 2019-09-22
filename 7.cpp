#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    vector <int> v;
    cin >> n;
    for (int i = 0; i < n;i++) {
        cin >> t;
        v.push_back(t);
    }
    for (int i = v.size()-1; i>= 0;i--) {
        cout << v[i] <<" ";
    }
}
