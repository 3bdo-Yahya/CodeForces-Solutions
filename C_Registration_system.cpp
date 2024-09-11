#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> mp;
    string user;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> user;

        if (mp[user])
            cout << user << mp[user] << '\n';
        else
            cout << "OK" << '\n';

        mp[user]++;
    }

    return 0;
}

// Time : O(n log n)
// Space: O(n)

/*
    .cph file
{
    "name":"C. Registration system",
    "group":"Codeforces - Codeforces Beta Round 4 (Div. 2 Only)",
    "url":"https://codeforces.com/problemset/problem/4/C",
    "interactive":false,"memoryLimit":64,"timeLimit":5000,
    "tests":[{"input":"4\nabacaba\nacaba\nabacaba\nacab\n","output":"OK\nOK\nabacaba1\nOK\n","id":1726017386223},{"id":1726017386186,"input":"6\nfirst\nfirst\nsecond\nsecond\nthird\nthird\n","output":"OK\nfirst1\nOK\nsecond1\nOK\nthird1\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"CRegistrationSystem"}},
    "batch":{"id":"7dd74038-d3ad-40db-b411-8cc7f097740c","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\C_Registration_system.cpp"
}
*/