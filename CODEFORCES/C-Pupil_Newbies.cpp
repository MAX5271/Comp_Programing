// LINK TO THE QUESTION : https://codeforces.com/gym/503989/problem/C

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

void solve() {
    int s, d;
    cin >> s >> d;
    if((s+d) % 2 != 0) {
        cout << -1 << endl;
        return;
    }
    int n = (s + d) / 2;
    int p = (s - d) / 2;
    cout << n << " " << p << endl;

}

int main() {
    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}
