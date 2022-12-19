#include <iostream>
using namespace std;

int sumArray(int num[], int n)
{
    int sum = 0;
    int a;
    for (int i = 0; i < n; i++)
    {
        a=sum+num[i];
        sum=a;
    }
    return a;
}


int main()
{
    int size;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "The sum value is " << sumArray(num, size) << endl;
    // cout << "The minimum value is " << getMin(num, size) << endl;

    return 0;
}