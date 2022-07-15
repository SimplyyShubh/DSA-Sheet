// https://www.geeksforgeeks.org/chocolate-distribution-problem/

#include <bits/stdc++.h>
using namespace std;

int solution(int packets[], int m)
{
    // int n = sizeof(packets) / sizeof(packets[0]); // To get the size of the array packets
    int n = 4 ;
    sort(packets, packets + n);                   // Sorting the array till its length

    for (int i = 0; i < n; i++)
    {
        cout << packets[i] << ", ";
    }

    return 1 ;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    solution(arr, 1);
    return 1;
}
