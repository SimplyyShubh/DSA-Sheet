// https://www.geeksforgeeks.org/chocolate-distribution-problem/

#include <bits/stdc++.h>
using namespace std;

int solution(int arr[], int n, int m)
{
  
    sort(arr, arr + n) ;

    int min = INT_MAX ;

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << ", ";
    }
        cout << '\n' ;
    for (int i = 0 , j = i+m -1 ; j < n; i++ , j++)
    {
        if (min > (arr[j] - arr[i]))
            min = arr[j] - arr[i] ;
    
    }
    return min ;
}

int main()
{
    int packets[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 
                     28, 42, 30, 44, 48, 43, 50};
    int n = sizeof(packets) / sizeof(packets[0]);

    cout << solution(packets, n, 7) ;

        return 1;
}
