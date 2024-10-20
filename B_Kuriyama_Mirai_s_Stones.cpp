#include <iostream>
#include <set>
#include <algorithm>
#define int long long
using namespace std;

signed main() {
    int n, q, type, l, r; cin >> n; int v[n], u[n], pre_v[n + 1] = {}, pre_u[n + 1] = {}; multiset<int> U;

    for (int i = 0; i < n; i++) cin >> v[i], U.insert(v[i]), pre_v[i + 1] = pre_v[i] + v[i];


    sort(v, v + n); for (int i = 0; i < n; i++) pre_u[i + 1] = pre_u[i] + v[i];

    // multiset<int>::iterator it = U.begin(); for (int i = 0; i < n; i++) pre_u[i + 1] += pre_u[i] + *it++;


    cin >> q; while (cin >> type >> l >> r) cout << (type == 1 ? pre_v[r] - pre_v[l - 1] : pre_u[r] - pre_u[l - 1]) << '\n';

    return 0;
}

/*
.cph file
{
    "name":"B. Kuriyama Mirai's Stones","group":"Codeforces - Codeforces Round 248 (Div. 2)",
    "url":"https://codeforces.com/problemset/problem/433/B","interactive":false,"memoryLimit":256,"timeLimit":2000,
    "tests":[{"id":1729454470867,"input":"6\n6 4 2 7 2 7\n3\n2 3 6\n1 3 4\n1 1 6\n","output":"24\n9\n28\n"},{"id":1729454470805,"input":"4\n5 5 2 3\n10\n1 2 4\n2 1 4\n1 1 1\n2 1 4\n2 1 2\n1 1 1\n1 3 3\n1 1 3\n1 4 4\n1 2 2\n","output":"10\n15\n5\n15\n5\n5\n2\n12\n3\n5\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BKuriyamaMiraisStones"}},
    "batch":{"id":"24389668-bae0-477e-bbee-427aa68387b4","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\B_Kuriyama_Mirai_s_Stones.cpp"
}
*/