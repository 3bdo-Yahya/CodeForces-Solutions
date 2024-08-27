#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> P, N, Z;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            P.push_back(x);
        }
        else if (x < 0)
        {
            N.push_back(x);
        }
        else
        {
            Z.push_back(x);
        }
    }

    if (P.empty())
    {
        for (int i = 0; i < 2; i++)
        {
            P.push_back(N.back());
            N.pop_back();
        }
    }

    if (N.size() % 2 == 0)
    {
        Z.push_back(N.back());
        N.pop_back();
    }

    cout << N.size() << ' ';
    for (auto it : N)
        cout << it << ' ';
    cout << '\n';

    cout << P.size() << ' ';
    for (auto it : P)
        cout << it << ' ';
    cout << '\n';

    cout << Z.size() << ' ';
    for (auto it : Z)
        cout << it << ' ';
    cout << '\n';
}


/*
    .cph file
{
    "name":"A. Array",
    "group":"Codeforces - Codeforces Round 181 (Div. 2)",
    "url":"https://codeforces.com/problemset/problem/300/a",
    "interactive":false,"memoryLimit":256,"timeLimit":2000,
    "tests":[{"input":"3\n-1 2 0\n","output":"1 -1\n1 2\n1 0\n","id":1724796874620},{"id":1724796874676,"input":"4\n-1 -2 -3 0\n","output":"1 -1\n2 -3 -2\n1 0\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"AArray"}},
    "batch":{"id":"3b407321-e378-456e-a805-dde5cd1b9087","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\A_Array.cpp"
}
*/