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

            cout << max(pre_max[l], pre_sum[l] + suf_max[r]) - min(pre_min[l], pre_sum[l] + suf_min[r]) + 1 << '\n';
        }
}

    // while (tc--) {
    //     int n, q; string s; cin >> n >> q >> s;
    
    //     int pre[n + 1] = {}, premx[n + 1] = {}, premn[n + 1] = {}, sufmn[n + 1] = {}, sufmx[n + 1] = {};

    //     for (int i = 0; i  < n; i++) s[i] == '+' ? pre[i + 1]++ : pre[i + 1]--;
    //     for (int i = 1; i <= n; i++) pre[i] += pre[i - 1];

    //     for (int i = 1; i <= n; i++)
    //     {
    //         premx[i] = premn[i] = pre[i];
    //         premx[i] = max(premx[i], premx[i - 1]);
    //         premn[i] = min(premn[i], premn[i - 1]);
    //     }

    //     sufmx[n] = sufmn[n] = pre[n];
    //     for (int i = n - 1; i >= 1; i--)
    //     {
    //         sufmn[i] = sufmx[i] = pre[i];
    //         sufmx[i] = max(sufmx[i], sufmx[i + 1]);
    //         sufmn[i] = min(sufmn[i], sufmn[i + 1]);
    //     }

    //     while (q--)
    //     {
    //         int l, r; cin >> l >> r;
    //         int mx = premx[l - 1], mn = premn[l - 1];
    //         if (r != n)
    //         {
    //             mx = max(mx, sufmx[r + 1] - (pre[r] - pre[l - 1]));
    //             mn = min(mn, sufmn[r + 1] - (pre[r] - pre[l - 1]));
    //         }
    //         cout << mx - mn + 1 << '\n';
    //     }
    // }

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