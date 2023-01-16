#include <bits/stdc++.h>
using namespace std;
void search(int mat[r][c], int x)
{
    int i = 0, j = c - 1;
    while (i < R && j >= 0)
    {
        if (mat[i][j] == x)
        {
            cout << i << " " << j;
            return;
        }
        else if (mat[i][j] > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return -1;
}
int main()
{

    return 0;
}