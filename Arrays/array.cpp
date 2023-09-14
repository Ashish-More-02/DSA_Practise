// //program to search a element in the user defined array 

// #include <iostream>
// using namespace std;

// int search(int arr[], int n, int x)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == x)
//         {
//             return i;  // Return the index where the element was found
//         }
//     }
//     return -1;  // Return -1 if the element was not found
// }

// int main()
// {
//     int n, x;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];  // Declare the array after getting the size input

//     cout << "Now enter the elements in the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Enter the element to be searched in the array: ";
//     cin >> x;

//     int index = search(arr, n, x);

//     if (index != -1)
//     {
//         cout << "Element found at index " << index << endl;
//     }
//     else
//     {
//         cout << "Element not found in the array" << endl;
//     }

//     return 0;
// }











// program to find minimum and maximum number in the array 
#include <iostream>
#include <algorithm>
using namespace std;


int main (){

    int n, x;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];  // Declare the array after getting the size input

    cout << "Now enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);  // inbuilt function in algorithm header .

    // printing the array after sorting
    cout <<"sorted array is : ";
    for (int i=0;i<n;i++){
        cout <<arr[i]<<" , ";
    }

    int maxElement = arr[n-1];   // do not use -1 indexing here  , because it will give wrong answers , use the (size -1) indexing 
    int minElement = arr[0];

    cout <<"maximum element in array "<<maxElement<<endl;
    cout <<"minimum element in array "<<minElement<<endl;


    return 0;
}




// similar questions , 
// search the first occurance of element in the array
// search the last occurance element of in the array 
// reverse the array 
// rotate the array 
