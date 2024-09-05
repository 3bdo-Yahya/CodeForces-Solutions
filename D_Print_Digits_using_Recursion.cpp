#include <iostream>
using namespace std;
void print(int n) {
    if (n < 10) cout << n << ' ';
    else {
        print(n / 10);
        cout << n % 10 << ' ';
    }
}
int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        int n;
        cin >> n;
        print(n);
        cout << '\n';
    }

    return 0;
}

/*
    .cph file
{
    "name":"D. Print Digits using Recursion",
    "group":"Codeforces - Sheet #7 (Recursion)",
    "url":"https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D",
    "interactive":false,"memoryLimit":256,"timeLimit":1000,
    "tests":[{"id":1725494154750,"input":"3\n121\n39\n123456\n","output":"1 2 1\n3 9\n1 2 3 4 5 6\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"DPrintDigitsUsingRecursion"}},
    "batch":{"id":"e388acdf-f719-49fe-9cc6-63226f842f5e","size":1},"srcPath":"d:\\2.1\\C++\\Code\\D_Print_Digits_using_Recursion.cpp"
}
*/