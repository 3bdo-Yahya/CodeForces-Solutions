#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t = 1;
    while (t--)
    {
        string str1, str2;
        cin >> str1;

        while (str1[str1.size() - 1] == '0') str1.pop_back();

        str2 = str1;
        reverse(str1.begin(), str1.end());

        if (str2 == str1) cout << "YES" << endl;
        else              cout << "NO"  << endl;
    }
    return 0;
}

/*
    // An alternative approach is to use a recursive function to
    // remove trailing zeroes from the string. This can be more
    // efficient than using a while loop, especially for very large
    // strings.


string suff(string s)
{
    if (s.size() <= 1 || s[s.size() - 1] != '0') return s;
    else
    {
        s.pop_back();
        return suff(s);
    }
}
int main()
{
    string s;
    cin >> s;

    if (s == string(s.rbegin(), s.rend())) return cout << "Yes", 0;

    string t = suff(s);
    if (t == string(t.rbegin(), t.rend())) return cout << "Yes", 0;

    cout << "No";
}

*/



/*
    .cph file
{
    "name":"A. Quasi-palindrome",
    "group":"Codeforces - Educational Codeforces Round 29",
    "url":"https://codeforces.com/problemset/problem/863/A",
    "interactive":false,"memoryLimit":256,"timeLimit":1000,
    "tests":[{"input":"131\n","output":"YES\n","id":1724373250907},{"input":"320\n","output":"NO\n","id":1724373250863},{"id":1724373250856,"input":"2010200\n","output":"YES\n"}],
    "testType":"single","input":{"type":"stdin"},"output":{"type":"stdout"},"languages":{"java":{"mainClass":"Main","taskClass":"AQuasiPalindrome"}},
    "batch":{"id":"9e95064e-aea6-4646-93ec-bb1642286305","size":1},"srcPath":"d:\\C++\\CodeForces\\CodeForces-Solutions\\A_Quasi_palindrome.cpp"
}
*/