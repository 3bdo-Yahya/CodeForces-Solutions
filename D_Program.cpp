#include <iostream>
using namespace std;

int main() {
    int tc; cin >> tc;

    while (tc--) {
        int n, m; string s; cin >> n >> m >> s; s = ' ' + s;
    
        int pre_sum[n + 1] = {}, pre_max[n + 1] = {}, pre_min[n + 1] = {}, suf_min[n + 2] = {}, suf_max[n + 2] = {};

        for (int i = 1; i <= n; i++) {
            pre_sum[i] = pre_sum[i - 1] + (s[i] == '+' ? 1 : -1);
            pre_max[i] = max(pre_max[i - 1], pre_sum[i]);
            pre_min[i] = min(pre_min[i - 1], pre_sum[i]);
        }

        for (int i = n; i >= 1; i--) {
            suf_min[i] = min(0, suf_min[i + 1] + (s[i] == '+' ? 1 : -1));
            suf_max[i] = max(0, suf_max[i + 1] + (s[i] == '+' ? 1 : -1));
        }

        while(m--) {
            int l, r; cin >> l >> r; --l; ++r;
            // # of unique values here ==> max - min + 1
            cout << max(pre_max[l], pre_sum[l] + suf_max[r]) - min(pre_min[l], pre_sum[l] + suf_min[r]) + 1 << '\n';
        }
    }

    return 0;
}

/*
.cph file
{
    "name":"D. Program","group":"Codeforces - Educational Codeforces Round 102 (Rated for Div. 2)",
    "url":"https://codeforces.com/problemset/problem/1473/D","interactive":false,"memoryLimit":256,"timeLimit":2000,
    "tests":[{"id":1729297036193,"input":"2\n8 4\n-+--+--+\n1 8\n2 8\n2 5\n1 1\n4 10\n+-++\n1 1\n1 2\n2 2\n1 3\n2 3\n3 3\n1 4\n2 4\n3 4\n4 4\n","output":"1\n2\n4\n4\n3\n3\n4\n2\n3\n2\n1\n2\n2\n2\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"DProgram"}},
    "batch":{"id":"0c10fc45-2512-4c5f-8dbc-acb3f6d2ebdc","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\D_Program.cpp"
}
*/