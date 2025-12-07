#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    tuple<string, int, string> persons[n];
    for (int i = 0; i < n; i++)
    {
        cin >> get<0>(persons[i]) >> get<1>(persons[i]) >> get<2>(persons[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << get<0>(persons[i]) << " " << get<1>(persons[i]) << " " << get<2>(persons[i])<<endl;
    }
    return 0;
}