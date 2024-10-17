#include <iostream>
using namespace std;

int main() {

    string s; cin >> s;

    int pr[s.length()];

    for (int i = 1; i < s.length(); i++)
        pr[i] = pr[i-1] + (s[i-1] == s[i]); 

    int q; cin >> q;

    while(q--) {
        int L, R; cin >> L >> R;

        cout << pr[R-1] - pr[L-1] << '\n';
    }

    return 0;
}

/*
.cph file
{
    "name":"B. Ilya and Queries",
    "group":"Codeforces - Codeforces Round 186 (Div. 2)",
    "url":"https://codeforces.com/problemset/problem/313/B","interactive":false,"memoryLimit":256,"timeLimit":2000,
    "tests":[{"input":"......\n4\n3 4\n2 3\n1 6\n2 6\n","output":"1\n1\n5\n4\n","id":1729173234520},{"id":1729173234537,"input":"#..###\n5\n1 3\n5 6\n1 5\n3 6\n3 4\n","output":"1\n1\n2\n2\n0\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BIlyaAndQueries"}},
    "batch":{"id":"908554fa-8ab2-417e-978e-ad1d34e8a116","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\B_Ilya_and_Queries.cpp"
}
*/