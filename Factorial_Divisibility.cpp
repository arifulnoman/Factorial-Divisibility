#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x;
    cin >> n >> x;
    vector<int> freq_array(x + 1,0);
    for(i = 0;i < n;i++)
    {
        int a;
        cin >> a;
        freq_array[a] = freq_array[a] + 1;
    }
    for(i = 1; i < x;i++)
    {
        if(freq_array[i] % (i + 1) == 0)
        {
            freq_array[i + 1] = freq_array[i + 1] + freq_array[i] / (i + 1);
            freq_array[i] = 0;
        }
    }
    for(i = 0;i < x;i++)
    {
        if(freq_array[i] != 0)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}