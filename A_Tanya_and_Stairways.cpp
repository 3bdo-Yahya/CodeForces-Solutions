#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q, steps;

    int stair  = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 1) {
            stair++;

            if (i) {
                steps.push(q.back());
            }
        }

        q.push(x);
    }

    cout << stair << '\n';

    while (!steps.empty()) {
        cout << steps.front() << ' ';
        steps.pop();
    }

    cout << q.back();

    return 0;
}

/*
    .cph file
{
    "name":"A. Tanya and Stairways",
    "group":"Codeforces - Codeforces Round 496 (Div. 3)",
    "url":"https://codeforces.com/problemset/problem/1005/A","interactive":false,"memoryLimit":256,"timeLimit":1000,
    "tests":[{"input":"7\n1 2 3 1 2 3 4\n","output":"2\n3 4\n","id":1725242245675},{"input":"4\n1 1 1 1\n","output":"4\n1 1 1 1\n","id":1725242245645},{"input":"5\n1 2 3 4 5\n","output":"1\n5\n","id":1725242245666},{"id":1725242245692,"input":"5\n1 2 1 2 1\n","output":"3\n2 2 1\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"ATanyaAndStairways"}},
    "batch":{"id":"f7eadd5b-1981-4215-b512-38b3d00421ee","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\A_Tanya_and_Stairways.cpp"
}
*/