#include <iostream>
using namespace std;

int main()
{
    // pointer is used to store any adress, we cannot store address in any other varaible

    int food = 20;

    cout << "food =" << food << endl;
    cout << "&food = " << &food << endl;

    int *ptr = &food; // this is pointer which is used to store address of the variable food . but while priting it gives the value of food which is = 20 .

    cout << *ptr;

    int num = 5;
    int a = num;
    cout << "a before " << num << endl;
    a++;
    cout << "a after " << num << endl;


    int *p = &num;
    cout << "before " << num << endl;
    (*p)++;
    cout<< "after " << num << endl;

    // copying a pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;
}