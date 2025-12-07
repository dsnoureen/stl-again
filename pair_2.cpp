#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    pair<string, int> persons[n];
    for (int i = 0; i < n; i++)
    {
        cin >> persons[i].first >> persons[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        cout << persons[i].first << " " << persons[i].second << endl;
    }
    return 0;
}