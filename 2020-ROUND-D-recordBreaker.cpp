#include<iostream>
#include<vector>
using namespace std;

int CountRecordBreaker() {
    int N;
    cin >> N;
    vector<int> records(N);
    for (int i = 0; i < N; ++i) {
        cin >> records[i];
    }

    int cnt = 0;

    if (N == 1) {
        cnt = 1;
    }
    if (N > 1) {
        if(records[0] > records[1]) {
            ++cnt;
        }
        int max = records[0];
        for (int i = 1; i+1 < N; ++i) {
            if(records[i] > max && records[i] > records[i+1]) {
                max = records[i];
                ++cnt;
                ++i;
            }
        }
        if(records[N-1] > records[N-2] && records[N-1] > max) {
            ++cnt;
        }
    }
    return cnt;
}

int main() {
    int T;
    cin >> T;
    int res = 0;
    for (int i = 0; i < T; ++i) {
        res = CountRecordBreaker();
        cout << "Case #" << i+1 << ": " << res << endl;
    }
    return 0;
}