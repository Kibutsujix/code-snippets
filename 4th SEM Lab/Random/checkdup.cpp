#include <bits/stdc++.h>
using namespace std;
#define size 20
int dupes(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                return 0;
        }
    }
    return -1;
}

void count_dupes(int arr[], int n)
{
    int count;
    int fr[n]; // array to hold the frequency of each element
    int visited = -1;

    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                fr[j] = visited;
            }
        }
        if (fr[i] != visited)
            fr[i] = count;
        if (fr[i] != visited)
            cout << "" << arr[i] << " - " << fr[i] << " time(s)." << endl;
    }
}

int main()
{
    int arr[size], n, ch;
    cout << "Enter number of elements : ";
    cin >> n;
    cout << "Enter array elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (;;)
    {
        cout << "Enter" << endl
             << "1.checking duplicates" << endl
             << "2.Counting number of times an element is present in the array" << endl
             << "3.Enter new array data" << endl
             << "4.Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            if (dupes(arr, n))
            {
                cout << "Unique array!" << endl;
                break;
            }
            else
            {
                cout << "Not a Unique array!" << endl;
                break;
            }
        case 2:
            count_dupes(arr, n);
            break;
        case 3:
            cout << "Enter number of elements : ";
            cin >> n;
            cout << "Enter array elements : " << endl;
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            break;
        case 4:
            exit(0);
        default:
            cout << "Enter proper input!" << endl;
            break;
        }
    }
    return 0;
}