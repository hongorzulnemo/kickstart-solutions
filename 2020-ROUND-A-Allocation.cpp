#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, B, i = 0;
    cin >> N >> B;
    vector<int> arr(N);
    for (i = 0; i < N; i++) cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    i = 0;
    while(B >= arr[i] && i < N) {
        B -= arr[i];
        i++;
    }
    cout << i << "\n";
}

int main()
{
    int T; cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
    }
}