#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n=5;
    vector<int> arr(n);
    // We can also initialize an empty vector and then push back.

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    // Sorted so that least element comes to begining and maximum one to end.

    long max=0, min=0;
    for (int i = 0; i < n; i++)
    {
        if(i>0)
        {
            // This means arr[i] is not least one, hence it has to be included for maximum sum.
            max += arr[i];
        }

        if(i<n-1)
        {
            // This means arr[i] is not largest one, hence it has to be included for minimum sum.
            min += arr[i];
        }
    }

    cout << min << " " << max << endl;
    return 0;
}
