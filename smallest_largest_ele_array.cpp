#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Array size must be positive." << endl;
        return 1;
    }

    int A[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> A[i];
    }

    // smallest and Largest Initialization: Two variables, smallest and largest,
    // are initialized with the value of the first element of the array A.
    // These variables will be used to track the smallest and largest elements in the array.
    // Finding Smallest and Largest: Another loop iterates through the array starting from the second element.
    // For each element, it compares the element with the current smallest and largest values.
    // If the element is smaller than the current smallest, the smallest variable is updated.
    // If the element is larger than the current largest, the largest variable is updated.
    int smallest = A[0];
    int largest = A[0];

    for (int i = 1; i < n; ++i)
    {
        if (A[i] < smallest)
        {
            smallest = A[i];
        }

        if (A[i] > largest)
        {
            largest = A[i];
        }
    }

    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;

    return 0;
}
