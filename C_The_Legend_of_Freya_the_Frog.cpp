#include <iostream>
using namespace std;

int main() {

    int tc, x, y, k;
    cin >> tc;

    while (tc--) {
        cin >> x >> y >> k;
        
        x = (x + k -1) / k;
        y = (y + k -1) / k;

        cout << max(2 * x - 1, 2 * y) << '\n';
    }

    return 0;
}

/*
    .cph file
{
    "name":"C. The Legend of Freya the Frog",
    "group":"Codeforces - Codeforces Round 971 (Div. 4)",
    "url":"https://codeforces.com/contest/2009/problem/C",
    "interactive":false,"memoryLimit":256,"timeLimit":2000,
    "tests":[{"id":1725376553521,"input":"3\n9 11 3\n0 10 8\n1000000 100000 10\n","output":"8\n4\n199999\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"CTheLegendOfFreyaTheFrog"}},
    "batch":{"id":"060a34a1-861e-44db-9c45-06bf79aee1bb","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\C_The_Legend_of_Freya_the_Frog.cpp"
}
*/