#include <iostream>
#include <queue>
using namespace std;

int main() {
    int sz, m;
    cin >> sz >> m;

    queue<pair<int, int>> q;

    for (int i = 0; i < sz; i++)
    {
        int x;
        cin >> x;
        q.push({x, i});
    }

    while (q.size() > 1)
    {
        q.front().first -= m;

        if (q.front().first > 0)
            q.push(q.front());

        q.pop();
    }

    cout << q.front().second + 1;

    return 0;
}

/*
    .cph file
{
    "name":"A. Jzzhu and Children",
    "group":"Codeforces - Codeforces Round 257 (Div. 2)",
    "url":"https://codeforces.com/problemset/problem/450/A","interactive":false,"memoryLimit":256,"timeLimit":1000,
    "tests":[{"input":"5 2\n1 3 1 4 2\n","output":"4\n","id":1725242250728},{"id":1725242250712,"input":"6 4\n1 1 2 2 3 3\n","output":"6\n"},{"id":1725297784714,"input":"7 3\n6 1 5 4 2 3 1","output":"4"},{"id":1725298302004,"input":"9 3\n9 5 2 3 7 1 8 4 6","output":"7"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"AJzzhuAndChildren"}},
    "batch":{"id":"03345f97-99fa-4fb9-aeff-ad83a6de4b3e","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\A_Jzzhu_and_Children.cpp"
}
*/
