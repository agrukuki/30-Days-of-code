#include <bits/stdc++.h>
using namespace std;


int main() {
    map<string, int> numbers;
    int N;
    cin >> N;
    string name;
    int num;
    for(int i = 0; i < N; i++) {
        cin >> name >> num;
        numbers[name] = num;
    }
    while(cin >> name) {
        if(numbers[name] != 0) {
        cout << name << "=" << numbers[name] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
