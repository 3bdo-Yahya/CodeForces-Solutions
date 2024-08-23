#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tc, a;
    cin >> tc >> a;
    vector<int> pr(12, 0);
    for (int i = 0; i < tc; i++)
    {
        int c, d;
        cin >> c >> d;
        pr[a]++; pr[7 - a]++;
        pr[c]++; pr[7 - c]++;
        pr[d]++; pr[7 - d]++;
    }
    for (int i = 1; i < 7; ++i)
        if (pr[i] != tc)
            return cout << "NO", 0;
    cout << "YES";
}


/*
    .cph file
{
    "name":"A. Dice Tower",
    "group":"Codeforces - Codeforces Round 139 (Div. 2)",
    "url":"https://codeforces.com/contest/225/problem/A",
    "interactive":false,"memoryLimit":256,"timeLimit":2000,
    "tests":[{"input":"3\n6\n3 2\n5 4\n2 4\n","output":"YES\n","id":1724274546794},{"id":1724274546822,"input":"3\n3\n2 6\n4 1\n5 3\n","output":"NO\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"ADiceTower"}},
    "batch":{"id":"b5e7578f-2051-4e78-a07e-b3f3de08a99a","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\A_Dice_Tower.cpp"
}
*/