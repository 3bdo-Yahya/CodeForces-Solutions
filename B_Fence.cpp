#include <iostream>
using namespace std;

int main() {
    int n, m, idx = 0; cin >> n >> m; int a[n], pre[n] = {};

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        i < m ? pre[0] += a[i] : pre[0];
        // i ? pre[i] += pre[i - 1] + a[i] : pre[i] += a[i];
    }

    int mn = pre[0];
    for (int i = 1; i <= n-m; ++i) {
        pre[i] += pre[i-1] - a[i-1] + a[i+m-1];
        if(pre[i] < mn) {
            mn = pre[i];
            idx = i;
        }
    }

    // int mn = pre[m-1];
    // for (int i = m; i < n; i++) {
    //     if(pre[i] - pre[i - m] < mn) {
    //         mn = pre[i] - pre[i - m];
    //         idx = i - m + 1;
    //     }
    // }

    cout << idx + 1 << "\n";
}

// Time:  O(n)
// Space: O(n)

/*
.cph file
{
    "name":"B. Fence","group":"Codeforces - Codeforces Round 211 (Div. 2)",
    "url":"https://codeforces.com/contest/363/problem/B","interactive":false,"memoryLimit":256,"timeLimit":1000,
    "tests":[{"input":"7 3\n1 2 6 1 1 7 1\n","output":"3\n","id":1729460671241}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BFence"}},
    "batch":{"id":"16644148-1655-48d5-9efb-a31b2871eaa7","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\B_Fence.cpp"
}
*/