#include <iostream>
#include <deque>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        deque<int> dq;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                char e;
                cin >> e;

                if (e == '#') dq.push_front(j + 1);
            }
        }

        while (!dq.empty()) {
            cout << dq.front() << ' ';
            dq.pop_front();
        }

        cout << '\n';
    }

    return 0;
}

/*
    .cph file

{
    "name":"B. osu!mania",
    "group":"Codeforces - Codeforces Round 971 (Div. 4)",
    "url":"https://codeforces.com/contest/2009/problem/B","interactive":false,"memoryLimit":256,"timeLimit":1000,
    "tests":[{"id":1725375083907,"input":"3\n4\n#...\n.#..\n..#.\n...#\n2\n.#..\n.#..\n1\n...#\n","output":"4 3 2 1\n2 2\n4\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BOsumania"}},
    "batch":{"id":"c7211953-8ee7-45a7-8c76-f4fdc98401a2","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\B_osu_mania.cpp"
}
*/