#include <bits/stdc++.h>
using namespace std;

bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    if (v1[0] == v2[0])
    {
        if (v1[1] == v2[1])
        {
            return v1[2] < v2[2];
        }
        return v1[1] > v2[1];
    }
    return v1[0] < v2[0];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("TWSP_small.txt", "r", stdin);
    freopen("output_small.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<vector<int>> vec1;
        for (int i = 0; i < t; i++)
        {
            vector<int> v1;
            int num;
            for (int j = 0; j < 3; j++)
            {
                cin >> num;
                v1.push_back(num);
            }
            vec1.push_back(v1);
        }
        sort(vec1.begin(), vec1.end(), sortcol);

        cout << vec1[0][0] << " " << vec1[0][1] << " " << vec1[0][2] << endl;
        for (int i = 1; i <= t; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << vec1[i][j] << " ";
            }
            cout << endl;
        }
    }
}