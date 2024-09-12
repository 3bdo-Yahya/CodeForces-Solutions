#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./", pos; char c; int d;

    cin >> pos;

    pos == "R" ? d = -1 : d = 1;

    while (cin >> c) cout << key[find(key.begin(), key.end(), c) - key.begin() + d];

    return 0;
}

// Time:  O(n)
// Space: O(1)

/*
    .cph file
{
    "name":"A. Keyboard",
    "group":"Codeforces - Codeforces Round 271 (Div. 2)",
    "url":"https://codeforces.com/problemset/problem/474/A",
    "interactive":false,"memoryLimit":256,"timeLimit":2000,
    "tests":[{"id":1726106525948,"input":"R\ns;;upimrrfod;pbr\n","output":"allyouneedislove\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"AKeyboard"}},
    "batch":{"id":"1d81681e-9b3f-4760-99ff-7085ff84439e","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\A_Keyboard.cpp"
}
*/