#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int>s;
    char x;

    while(cin >> x) if((int) x > 96 && (int) x < 123) s.insert(x);

    cout << s.size();

    return 0;
}

// Time:  O(n log k)
// Space: O(k)

//where n is the number of characters in the input and k is the number of unique lowercase letters in the input.

/*
    .cph file
{
    "name":"A. Anton and Letters",
    "group":"Codeforces - Codeforces Round 253 (Div. 2)",
    "url":"https://codeforces.com/problemset/problem/443/A",
    "interactive":false,"memoryLimit":256,"timeLimit":2000,
    "tests":[{"input":"{a, b, c}\n","output":"3\n","id":1726106016501},{"input":"{b, a, b, a}\n","output":"2\n","id":1726106016548},{"input":"{}\n","output":"0\n","id":1726106016569}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"AAntonAndLetters"}},
    "batch":{"id":"c8387e3b-39bd-43df-8167-3d22e4c29ab5","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\A_Anton_and_Letters.cpp"
}
*/