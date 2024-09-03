#include <iostream>
using namespace std;

int main() {
    short int tc, a, b;
    cin >> tc;

    while (cin >> a >> b) {
        cout << b - a << '\n';
    }

    return 0;
}

/*
    .cph file
{
    "name":"A. Minimize!",
    "group":"Codeforces - Codeforces Round 971 (Div. 4)",
    "url":"https://codeforces.com/contest/2009/problem/0","interactive":false,"memoryLimit":256,"timeLimit":1000,
    "tests":[{"id":1725374172777,"input":"3\n1 2\n3 10\n5 5\n","output":"1\n7\n0\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"AMinimize"}},
    "batch":{"id":"aa1423d4-cd15-4e78-bbf0-a506d779d2a5","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\A_Minimize.cpp"
}
*/