#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> s; char n;

    while (cin >> n) s.insert(n); 

    cout << (s.size() & 1 ? "IGNORE HIM!" : "CHAT WITH HER!");

    return 0;
}

// Time:  O(n log n)
// Space: O(n)

/*
    .cph file
{
    "name":"A. Boy or Girl",
    "group":"Codeforces - Codeforces Round 146 (Div. 2)",
    "url":"https://codeforces.com/problemset/problem/236/A",
    "interactive":false,"memoryLimit":256,"timeLimit":1000,
    "tests":[{"input":"wjmzbmr\n","output":"CHAT WITH HER!\n","id":1726103209197},{"input":"xiaodao\n","output":"IGNORE HIM!\n","id":1726103209180},{"id":1726103209195,"input":"sevenkplus\n","output":"CHAT WITH HER!\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"ABoyOrGirl"}},
    "batch":{"id":"f1aa339d-f73d-48ae-94e3-cbd4a3a18107","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\A_Boy_or_Girl.cpp"
}
*/