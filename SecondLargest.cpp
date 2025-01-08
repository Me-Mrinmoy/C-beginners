#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {12,35,1,10,34,1};

    // find the largest element-
    int INT_MIN;
    int ans = INT_MIN;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > ans)
        ans = arr[i];
    }

    // find the second largest element-
    int second = INT_MIN;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] != second)
        second = arr[i];
    }
    for (int i = 0; i < 6; i++)
    cout << arr[i] <<" ";
}