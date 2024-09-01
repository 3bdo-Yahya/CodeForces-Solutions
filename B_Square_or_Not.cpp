#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

    int tc;
    cin >> tc;

    while (tc--)
    {
        int sz;
        string s;
        cin >> sz >> s;

        int zeros   = count(s.begin(), s.end(), '0');
        int sqrt_sz = static_cast<int>(sqrt(sz));

        if(sqrt_sz * sqrt_sz == sz && (sqrt_sz - 2) * (sqrt_sz - 2) == zeros) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}


/*
    .cph file
{
    "name":"B. Square or Not",
    "group":"Codeforces - Codeforces Round 970 (Div. 3)",
    "url":"https://codeforces.com/contest/2008/problem/B",
    "interactive":false,"memoryLimit":256,"timeLimit":2000,
    "tests":[{"id":1725201971054,"input":"5\n2\n11\n4\n1111\n9\n111101111\n9\n111111111\n12\n111110011111\n","output":"No\nYes\nYes\nNo\nNo\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BSquareOrNot"}},
    "batch":{"id":"10394517-01a7-4276-afa6-f78275505d38","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\B_Square_or_Not.cpp"
}
*/