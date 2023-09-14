#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    //  printing inverted pyramid
    //  outer loop for selecting the rows
    for (int i = 0; i < n; i++)
    {
        // printing white spaces
        for (int j = 0; j <= i; j++)
        {
            cout << "-";
        }
        //printing stars
        for (int star = 5; star > i; star--)
        {
            cout << "* ";
        }
        //printing whitespaces
        for (int j = 0; j <= i; j++)
        {
            cout << "-";
        }

        cout << endl;
    }
    return 0;
}




// * * * * *
// -* * * * -
// --* * * --
// ---* * ---
// ----* ----