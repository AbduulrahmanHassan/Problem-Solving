#include <iostream>
using namespace std;

void Merge(int arr[], int left, int right, int mid)
{
    int LeftArrSize = mid - left + 1;
    int RightArrSize = right - mid;

    int *leftarr = new int[LeftArrSize];
    int *rightarr = new int[RightArrSize];

    for (int i = 0; i < LeftArrSize; i++)
        leftarr[i] = arr[left + i];

    for (int i = 0; i < RightArrSize; i++)
        rightarr[i] = arr[mid + 1 + i];

    int i = 0, j = 0, mainArrIndex = left;

    while (i < LeftArrSize && j < RightArrSize)
    {
        if (leftarr[i] < rightarr[j])
        {
            arr[mainArrIndex] = leftarr[i];
            i++;
        }
        else
        {
            arr[mainArrIndex] = rightarr[j];
            j++;
        }
        mainArrIndex++;
    }

    while (i < LeftArrSize)
        arr[mainArrIndex++] = leftarr[i++];

    while (j < RightArrSize)
        arr[mainArrIndex++] = rightarr[j++];

    delete[] leftarr;
    delete[] rightarr;
}

void MergeSort(int arr[], int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);
    Merge(arr, left, right, mid);
}

int main()
{
    int arr[] = {1, 5, 2, 7, 4, 10, 3};
    int size = sizeof(arr) / sizeof(int);

    MergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
