#include <bits/stdc++.h>
using namespace std;
int Largest(int arr[], int n)
{
    long long mx = -1;
    stack<pair<long long, long long>> st;
    stack<pair<long long, long long>> st1;
    vector<long long> nsl;
    vector<long long> nsr;
    vector<long long> ans;
    // nearest greater to left
    for (int i = 0; i < n; i++)
    {
        if (st.size() == 0)
            nsl.push_back(-1);
        else if (st.size() > 0 and st.top().first < arr[i])
            nsl.push_back(st.top().second);
        else if (st.size() > 0 and st.top().first >= arr[i])
        {

            while (st.size() > 0 and st.top().first >= arr[i])
                st.pop();
            if (st.size() == 0)
                nsl.push_back(-1);
            else
                nsl.push_back(st.top().second);
        }
        st.push({arr[i], i});
    }

    // nearest greater to right
    for (int i = n - 1; i >= 0; i--)
    {
        if (st1.size() == 0)
            nsr.push_back(n);
        else if (st1.size() > 0 and st1.top().first < arr[i])
            nsr.push_back(st1.top().second);
        else if (st1.size() > 0 and st1.top().first >= arr[i])
        {

            while (st1.size() > 0 and st1.top().first >= arr[i])
                st1.pop();
            if (st1.size() == 0)
                nsr.push_back(n);
            else
                nsr.push_back(st1.top().second);
        }
        st1.push({arr[i], i});
    }

    reverse(nsr.begin(), nsr.end());

    for (int i = 0; i < n; i++)
    {
        mx = max(arr[i] * (nsr[i] - nsl[i] - 1), mx);
    }
    return mx;
}
int maxRec(int mat[][MAX], int R, int C)
{
    int res = largestRectArea(mat[0], C);
    for (int i = 1; i < R; i++)
    {
        for (int j = 0; j < C; j--)
        {
            /* code */
            if (mat[i][j] == 1)
            {
                mat[i][j] += mat[i - 1][j];
            }
        }
        res = max(res, largestRectArea(mat[i], C));
    }
    return res;
}
int main()
{
    int mat[5][4] = {1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1};
    int ans = maxRec(mat, 5, 4);
    cout << ans << endl;
    return 0;
}