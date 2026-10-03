#include <iostream>
using namespace std;

void arrIn(int arr[], int n)
{
    cout << "Enter " << n << " integers: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void display(int arr[], int n)
{
    cout << "Entered values are: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int sumOfArr(int arr[], int n)
{
    int sum = 0;
    float avg=0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
    return avg = sum/n;
}

float avgOfArr(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return (float)sum / n;
}

int main()
{
    int arr[100];
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    arrIn(arr, n);
    display(arr, n);

    int sum = sumOfArr(arr, n);
    float average = avgOfArr(arr, n);

    cout << "Sum = " << sum ;
    cout << "Average = " << average;
    

    return 0;
}