#include <iostream>
using namespace std;

const int N = 1e6+5;
int pr[10][N];

int g(int n) {
    int res = 1, temp = n;
    for (; temp; temp /= 10) res *= (temp % 10 ? temp % 10 : 1);
    return n < 10 ? n : g(res);
}

int main() {

    int q;
    cin >> q;

    for (int i = 0; i < N; i++) {
        pr[g(i)][i]++;
    }

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j < N; j++) {
            pr[i][j] += pr[i][j - 1];
        }
    }

    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        cout << pr[k][r] - pr[k][l - 1] << "\n";
    }

}

/*
    .cph file
{
    "name":"B. Recursive Queries",
    "group":"Codeforces - ICM Technex 2018 and Codeforces Round 463 (Div. 1 + Div. 2, combined)",
    "url":"https://codeforces.com/problemset/problem/932/B",
    "interactive":false,"memoryLimit":256,"timeLimit":2000,
    "tests":[{"input":"4\n22 73 9\n45 64 6\n47 55 7\n2 62 4\n","output":"1\n4\n0\n8\n","id":1724434495303},{"input":"4\n82 94 6\n56 67 4\n28 59 9\n39 74 4\n","output":"3\n1\n1\n5\n","id":1724434495297}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BRecursiveQueries"}},
    "batch":{"id":"e23464e6-25bd-40e2-862c-c41cd1682cf9","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\B_Recursive_Queries.cpp"
}
*/