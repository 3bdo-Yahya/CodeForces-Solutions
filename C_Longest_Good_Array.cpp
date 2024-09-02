#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int tc;
    cin >> tc;

    while (tc--) {

        int l, r;
        cin >> l >> r;

        int diff = r - l;
        int ans  =  static_cast<int>(floor((-1 + sqrt(1.0 + 8.0 * diff)) / 2.0));

        cout << ans + 1 << '\n';
    }

    return 0;
}


/*
    .cph file
{
    "name":"C. Longest Good Array",
    "group":"Codeforces - Codeforces Round 970 (Div. 3)",
    "url":"https://codeforces.com/contest/2008/problem/C",
    "interactive":false,"memoryLimit":256,"timeLimit":2000,
    "tests":[{"id":1725206354414,"input":"5\n1 2\n1 5\n2 2\n10 20\n1 1000000000\n","output":"2\n3\n1\n5\n44721\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"CLongestGoodArray"}},
    "batch":{"id":"b540b663-ac67-4a83-9583-946e0f6c61c4","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\C_Longest_Good_Array.cpp"
}
*/