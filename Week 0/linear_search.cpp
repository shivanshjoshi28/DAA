#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);   // all the input will be taken from input.txt file;
    freopen("output.txt", "w", stdout); // all the output will be stored in output.txt file.
    int n, t, x, count, flag;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> t;
    while (t--)
    {
        cin >> x;
        count = flag = 0;
        for (int i = 0; i < n; i++)
        {
            count++;
            if (x == arr[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "Found after " << count << " comparisons" << endl;
        else
            cout << "Not Found" << endl;
    }

    return 0;
}