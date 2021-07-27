#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);   // all the input will be taken from input.txt file;
    freopen("output.txt", "w", stdout); // all the output will be stored in output.txt file.
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, count;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> x;
        count = 0;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            count++;
            if (x == arr[i])
            {
                cout << "Present " << count << endl;
                flag = 1;
                break;
            }
        }
        if (!flag)
            cout << "Not Present " << count << endl;
    }
    return 0;
}