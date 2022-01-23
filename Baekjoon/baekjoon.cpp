#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a = 1e5;
int main()
{
    int N, M;
    cin >> N >> M;
    int s[a], p[a+1] = {};
    for (int i=0;i<N;i++) {
        cin >> s[i];
        p[i+1] = p[i] + s[i];
    }
    for (int i=0;i<M;i++) {
        int r1, r2;
        cin >> r1 >> r2;
        cout << p[r2] - p[r1-1] << "\n";
    }

}