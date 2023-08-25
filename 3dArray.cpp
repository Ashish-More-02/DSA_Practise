#include <iostream>
using namespace std;

int main()
{
    int arr[2][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}}};
    cout << "this is 3d array !";

    // for 3d arrays we need 3 for loop
    // 1st for how many 2d arrays ,given by its index
    for (int i = 0; i < 2; i++)
    {
        // 2nd for loop for its rows
        for (int j = 0; j < 3; j++)
        {
            // third for loop for its columns
            for (int k = 0; k < 3; k++)
            {
                cout << arr[i][j][k] << ",";
            }
        }
    }
}