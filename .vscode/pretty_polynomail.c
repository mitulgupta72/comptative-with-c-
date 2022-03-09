// #include<bits\stdc+ + >
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++ )
    {
        cin >> arr[i];
    }
    for (int j = n - 1; j >= 0; j--)
    {
        if (arr[j] == 0)
        {
            continue;
        }
        else
        {
            if (j == n - 1)
            {

                if (abs(arr[j]) == 1)
                {
                    if (arr[j] > 0)
                    {
                        cout << "x^" << j << " ";
                    }
                    else
                    {
                        cout << "-"
                             << "x^" << j << " ";
                    }
                }

                else
                {
                    cout << arr[j] << "x^" << j << " ";
                }
            }
            else if (j == 0)
            {
                if (arr[j] >= 0)
                {
                    cout << "+ " << arr[j] << " ";
                }
                else
                {
                    cout << arr[j] << " ";
                }
            }
            else if (j == 1)
            {
                if (abs(arr[j]) == 1)
                {
                    if (arr[j] >= 0)
                    {
                        cout << "+ "
                             << "x"
                             << " ";
                    }
                    else
                    {
                        cout << "-"
                             << "x";
                    }
                }
                else
                {
                    if (arr[j] >= 0)
                    {
                        cout << "+ " << arr[j] << "x"
                             << " ";
                    }
                    else
                    {
                        cout << arr[j] << "x";
                    }
                }
            }
            else
            {
                if (abs(arr[j]) == 1)
                {
                    if (arr[j] >= 0)
                    {
                        cout << "+ "
                             << "x^" << j;
                    }
                    else
                    {
                        cout << "-"
                             << "x^" << j;
                    }
                }
                else
                {
                    if (arr[j] >= 0)
                    {
                        cout << "+ " << arr[j] << "x^" << j;
                    }
                    else
                    {
                        cout << arr[j] << "x^" << j;
                    }
                }
            }
        }
    }

    return 0;
}