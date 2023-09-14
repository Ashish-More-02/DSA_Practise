#include <iostream>
using namespace std;

int main()
{
    int n =5;
    for (int i=0 ;i<n;i++){
        //printing white spaces
        for(int j=5;j>i;j--){
            cout <<"-";
        }
        for (int star =0;star<=i;star++){
            cout <<" *";
        }
        cout<<endl;
    }
    return 0;
}

// just replace the - with white spaces it will come to be your answer
//output 

// ----- *
// ---- * *
// --- * * *
// -- * * * *
// - * * * * *