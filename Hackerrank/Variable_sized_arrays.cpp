#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* code */
    // My approach using array
    // int n, k;
    // cin >> n;
    // cin >> k;

    // int arr_main[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr_main[i];
    //     for (int j = 0; j < arr_main[i]; j++)
    //     {
    //         cin >> arr_main[j];
    //     }
    // }

    // for (int i : arr_main)
    // {
    //     cout << i << endl;
    //
    int n, k;
    cin >> n >> k;

    // Creating nested vector
    vector<vector<int>> v1(n);

    // no_of_el represents the number of elements in each internal vector
    int no_of_el;
    for (int i = 0; i < n; i++)
    {
        cin >> no_of_el;
        for (int j = 0; j < no_of_el; j++)
        {
            // el represents the each element that we push in the internal vector
            int el;
            cin >> el;
            v1[i].push_back(el);
        }
    }

    // Handling queries
    int row, col;
    for (int i = 0; i < k; i++)
    {
        cin >> row;
        cin >> col;
        cout << v1[row][col] << endl;
    }
    return 0;
}
