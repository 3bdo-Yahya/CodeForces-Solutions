#include <iostream>
#include <set>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        int bottom, left;
        cin >> bottom >> left;

        set<int> s;

        for (int i = 0; i < bottom + left; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }

        cout << bottom + left - s.size() << '\n';
    }

    return 0;
}

// Time:  O(tc * (bottom + left) * log(bottom + left)) => O(100 * 100 * log(100)) = O(10000 log 100) = O(40000)
// Space: O(bottom + left) => O(100)

/*
    .cph file
{
    "name":"A. Cancel the Trains",
    "group":"Codeforces - Codeforces Round 688 (Div. 2)",
    "url":"https://codeforces.com/problemset/problem/1453/A",
    "interactive":false,"memoryLimit":512,"timeLimit":1000,
    "tests":[{"id":1726104211498,"input":"3\n1 2\n1\n3 4\n3 2\n1 3 4\n2 4\n9 14\n2 7 16 28 33 57 59 86 99\n3 9 14 19 25 26 28 35 41 59 85 87 99 100\n","output":"0\n1\n3\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"ACancelTheTrains"}},
    "batch":{"id":"68bbf86b-c23d-4ddd-a33e-1eef4a7caa50","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\A_Cancel_the_Trains.cpp"
}
*/