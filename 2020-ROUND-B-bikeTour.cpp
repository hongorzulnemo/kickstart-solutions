#include <bits/stdc++.h>

using namespace std;

int N;
int arr[110];

void solve()
{
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int ans = 0;
    for (int i = 1; i < N - 1; i++)
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1])
            ans++;
    cout << ans << "\n";
}

int main()
{
    int T; cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << "Case #" << i + 1 << ": ";
        solve();
    }
}