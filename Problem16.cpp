// liner search , binary , bubblesort

using namespace std;
#include <iostream>

void bubbleSort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int size, int value)
{
    int l = 0;
    int mid;
    int h = size - 1;
    mid = l + ((h - l) / 2);
    for (int i = 0; i < size; i++)
    {
        if (l > h)
        {
            break;
        }
        else
        {
            mid = l + ((h - l) / 2);
            if (arr[mid] == value)
            {
                return mid;
            }
            else if (value > arr[mid])
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
    }
    return -1;
}
int linearSearch(int arr[], int size, int value, int index)
{
    for (int i = 0; i < size; i++)
    {
        if (value == arr[i])
        {
            index = i;
            return index;
        }
    }
}
void InsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {5, 6, 8, 3, 4, 7};
    int value;
    int target;
    cout << "enter the value: " << endl;
    cin >> value;
    int size = sizeof(arr) / sizeof(int);
    int indexLinear = linearSearch(arr, size, value, target);
    cout << "the value of index using LinearSearch : " << indexLinear << endl;
    int index = binarySearch(arr, size, value);
    cout << "the value of index using BinarySearch : " << index << endl;
    bubbleSort(arr, size);
    cout << "the array:  " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl<< "insertionsort" <<endl;
    InsertionSort(arr , size);
        for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

/*mid = low + (high - low)/2
 */