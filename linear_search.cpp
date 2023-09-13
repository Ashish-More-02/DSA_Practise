#include <iostream>
using namespace std;

int linear_search(int arr[], int x, int len)
{

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    // we can take the array and the element to be found as input from the user 
    int arr[5] = {10, 20, 30, 40, 50};
    int no_to_be_found =40;
    int len = sizeof(arr) / sizeof(arr[0]);
    int answer = linear_search(arr, no_to_be_found, len);
    cout << "element 20 present at index number :" << answer;
}