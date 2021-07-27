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
        cin >> x; // element to search
        count = 0;
        int low = 0, high = n - 1;
        int flag = 0;
        while (low <= high)
        {
            count++;
            int mid = (low + high) / 2;
            if (arr[mid] == x)
            {
                cout << "Present " << count << endl;
                flag = 1;
                break;
            }
            else if (x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        if (!flag)
            cout << "Not Present " << count << endl;
    }
    return 0;
}