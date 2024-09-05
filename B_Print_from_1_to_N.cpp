#include <iostream>
using namespace std;
void print(int n) {
    if (n == 0) {
        return;
    }
    print(n - 1);
    cout << n << '\n';
}
int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}

/*
    .cph file
{
    "name":"B. Print from 1 to N",
    "group":"Codeforces - Sheet #7 (Recursion)",
    "url":"https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B",
    "interactive":false,"memoryLimit":64,"timeLimit":1000,
    "tests":[{"id":1725493722156,"input":"5\n","output":"1\n2\n3\n4\n5\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"BPrintFrom1ToN"}},
    "batch":{"id":"2def0b5b-ae31-414a-a023-996cf8b646dd","size":1},"srcPath":"d:\\2.1\\C++\\Code\\B_Print_from_1_to_N.cpp"
}
*/