#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    cin.clear();
    cin.ignore();
    string s[10];
    int i;
    for(i=0;i<t;i++) getline(cin,s[i]);
    int j,l;
    //char u;
    for(i=0;i<t;i++)
        {
        l=s[i].length();
        for(j=0;j<l;j++)
        {
            if(j%2==0)
                cout << s[i][j];
        }
        cout << " ";
        for(j=0;j<l;j++)
        {
            if(j%2==1)
                cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}
