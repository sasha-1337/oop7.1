#include <iostream>
#include <array>

using namespace std;

void Create(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
}

void Print(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int Max_Index(array<int, 100>& arr, int n)
{
    int max = arr[0], max_index=0;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    return max_index;
}

int Min_Index(array<int, 100>& arr, int n)
{
    int min = arr[0], min_index=0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }
    return min_index;
}

int main()
{
    srand((unsigned int)time(NULL));

    int n;
    cout << "Enter a size of array: "; cin >> n;

    array<int, 100> arr = { 0 };

    Create(arr, n);
    Print(arr, n);
    cout << " index(max) + index(min) = " 
         << Max_Index(arr, n) << " + " << Min_Index(arr, n) << " = "
         << Max_Index(arr, n) + Min_Index(arr, n) << endl;

    return 0;
}