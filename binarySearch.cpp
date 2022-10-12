// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int binarySearch(int a[], int n, int key)
// {
//     int s = 0, l = n;
//     while (s <= l)
//     {
//         int mid = (s + l) / 2;
//         if (a[mid] == key)
//         {
//             return mid;
//         }
//         else if (a[mid] > key)
//         {
//             l = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     int key;
//     cout << "Enter the number to search\n";
//     cin >> key;
//     cout << "the index is" << binarySearch(a, n, key) << endl;
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binarysearch(int a[], int n, int key)
{
    int s = 0;
    int l = n;
    while (s <= l)
    {
        int mid = (s + l) / 2;
        // cout << "The mid is\n"
        //      << mid << endl;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            l = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int key;
    cin >> key;
    cout << binarysearch(a, n, key);
    return 0;
}
