#include <iostream>

using namespace std;

// User Defined Functions....
void SumPairs(int n, int k, int Arr[])
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if((Arr[i] + Arr[j]) % k == 0)
                count++;
        }
    }

    cout<< count;
}

int main()
{
    int n, k;
    cin >> n >> k;

    if(n < 2 || n > 100 || k < 1 || k > 100)
        return 0;

    int Arr[n];

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if(num < 1 || num > 100)
            return 0;

        Arr[i] = num;
    }

    SumPairs(n, k, Arr);

    return 0;
}