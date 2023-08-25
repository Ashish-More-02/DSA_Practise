#include <iostream>
using namespace std;

int main()
{

    // int myArray[5] = {1, 2, 3, 4, 5};

    // int len = sizeof(myArray) / sizeof(myArray[0]);
    // // cout<<len;

    // // printing the elements in the array.

    // for (int i = 0; i < len; i++)
    // {
    //     cout << myArray[i] << endl;
    // }

    // // 1d array
    // // dynamically inserting elements into the array

    // int arrSize;
    // cout << "enter the array size ";
    // cin >> arrSize;

    // int new_array[arrSize] = {};

    // for (int i = 0; i < arrSize; i++)
    // {
    //     cin >> new_array[i];
    // }

    // cout << "the array that you created is :" << endl;
    // cout<<"[";

    // for (int i = 0; i < arrSize; i++)
    // {
    //     cout << new_array[i] << " , ";
    // }

    // cout<<"]";








// -------------------------------------------------------------------------------------------------------------------------











    // // 2d array
    // //  static 2d array
    // // syntax
    // // int array[row][col] ={{1, 2, 3}, {4, 5, 6}};

    // int _2dArray[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // // printing the 2d array

    // for (int row = 0; row < 2; row++)
    // {

    //     for (int col = 0; col < 3; col++)
    //     {
    //         cout << _2dArray[row][col] << " , ";
    //     }
    // }

    // // creating dynamic 2d arrays

    // int rowSize, colSize;
    // cout << "enter the row size for the array";
    // cin >> rowSize;
    // cout << "enter the col size for the array";
    // cin >> colSize;

    // int dyn2d_array[rowSize][colSize] ;

    // // inserting elements into the array

    // for (int row = 0; row < rowSize; row++)
    // {

    //     for (int col = 0; col < colSize; col++)
    //     {
    //         cin>> dyn2d_array[row][col];
    //     }
    // }

    // // printing the dynamically created array

    // for (int row = 0; row < rowSize; row++)
    // {

    //     for (int col = 0; col < colSize; col++)
    //     {
    //         cout << dyn2d_array[row][col] << " , ";
    //     }
    // }










// -------------------------------------------------------------------------------------------------------------------------












    // 3d Array
    // static 3d array


    int static_3d_array [2][3][3] ={{{1,2,3},{4,5,6},{7,8,9}},   {{1,2,3},{4,5,6},{7,8,9}}};


    // printing the elements in the 3d array 

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout<<static_3d_array[i][j][k]<<" , ";
            }
        }
    }



    int arrayNo, rowSize, colSize;

    cout << "enter the number of arrays you want to create";
    cin >> arrayNo;
    cout << "enter the row size of the arrays";
    cin >> rowSize;
    cout << "enter the col size of the arrays";
    cin >> colSize;

    // creating an array
    int _3dArray[arrayNo][rowSize][colSize];

    // inserting elements into the array

    for (int i = 0; i < arrayNo; i++)
    {
        for (int j = 0; j < rowSize; j++)
        {
            for (int k = 0; k < colSize; k++)
            {
                cin >> _3dArray[i][j][k];
            }
        }
    }

// printing the elements in the array 
    for (int i = 0; i < arrayNo; i++)
    {
        for (int j = 0; j < rowSize; j++)
        {
            for (int k = 0; k < colSize; k++)
            {
                cout<<_3dArray[i][j][k]<<" , ";
            }
        }
    }

    return 0;
}



// -------------------------------------------------------------------------------------------------------------------------
