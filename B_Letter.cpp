#include <iostream>
using namespace std;

int main() {
    string s1, s2; getline(cin, s1); getline(cin, s2);

    int fr[60] = {};

    for (auto c : s1) ++fr[c - 'A'];

    for (auto c : s2) if (c != ' ' && !fr[c - 'A']--) return cout << "NO", 0;

    cout << "YES";

    return 0;
}

/*
.cph file
{
    "name":"B. Letter",
    "group":"Codeforces - Codeforces Beta Round 42 (Div. 2)",
    "url":"https://codeforces.com/problemset/problem/43/B",
    "interactive":false,"memoryLimit":256,"timeLimit":2000,
    "tests":[{"input":"Instead of dogging Your footsteps it disappears but you dont notice anything\nwhere is your dog\n","output":"NO\n","id":1728996783012},{"input":"Instead of dogging Your footsteps it disappears but you dont notice anything\nYour dog is upstears\n","output":"YES\n","id":1728996783020},{"input":"Instead of dogging your footsteps it disappears but you dont notice anything\nYour dog is upstears\n","output":"NO\n","id":1728996782941},{"id":1728996783028,"input":"abcdefg hijk\nk j i h g f e d c b a\n","output":"YES\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BLetter"}},
    "batch":{"id":"9f209745-ed5d-4d52-a0a8-e9b7b08dde1b","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\B_Letter.cpp"
}
*/