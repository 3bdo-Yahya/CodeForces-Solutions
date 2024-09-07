#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        vector<int> v(n), pos(n + 1);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
            pos[v[i]] = i;
        }

        int ptr = n - 1;

        for(int i = n; i > 0; i--) {
            if(pos[i] <= ptr) {
                for (int j = pos[i]; j <= ptr; j++) {
                    cout << v[j] << ' ';
                }
                ptr = pos[i] - 1;
            }
        }

        cout << '\n';
    }

    return 0;
}


// Time : O(n^2)
// Space: O(n)

/*
    .cph file
{
    "name":"B. Card Deck",
    "group":"Codeforces - Codeforces Round 704 (Div. 2)",
    "url":"https://codeforces.com/problemset/problem/1492/B",
    "interactive":false,"memoryLimit":512,"timeLimit":1000,
    "tests":[{"id":1725242255910,"input":"4\n4\n1 2 3 4\n5\n1 5 2 4 3\n6\n4 2 5 3 6 1\n1\n1\n","output":"4 3 2 1\n5 2 4 3 1\n6 1 5 3 4 2\n1\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BCardDeck"}},
    "batch":{"id":"282d2a15-0dd5-46e9-a5f2-f05896d89fec","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\B_Card_Deck.cpp"
}
*/