#include <iostream>
#include <iomanip>
using namespace std;

int a = 20;

void myFunction()
{
    cout << "this is myFunction\n";
    cout << "vlaue of a is " << a;
}

int add(int a, int b)
{
    cout << "\nthis is addition function";
    return a + b;
}
int main()
{
    int a = 3;
    int b = 521678;

    cout << "local varibale a = " << a << endl;
    cout << "gloabl varibale a = " << ::a << endl; // to access global varible with the same name we use scope resoultion operator ::
    cout << "local varibale b = " << b << endl;

    myFunction();
    cout << "\n";
    int box = add(a, b);
    // cout<<box;

    // we can call a function directly , but we need a variable to store its reutrn value.

    // number system

    // we can use this to change the default number system dec , oct , hex

    cout << "this is value of b in decimal format =" << dec << b << "\n";
    cout << "this is value of b in octadecimal format =" << oct << b << "\n";
    cout << "this is value of b in hexadecimal format =" << hex << b << "\n";

    // conversly we can also use the setbase(number_system)       // it requires seperate header  #include <iomanip>
    // example setbase(8) = octadecimal
    // example setbase(10) = decimal      // default value
    // example setbase(16) = hexadecimal
    cout << "\n";
    cout << "this is value of b in decimal format =" << setbase(10) << b << "\n";
    cout << "this is value of b in octadecimal format =" << setbase(8) << b << "\n";
    cout << "this is value of b in hexadecimal format =" << setbase(16) << b << "\n";

    cout << setbase(10);
    int num = 10;
    cout << num << "\n";
    ++num;
    cout << num << "\n";

    // the ++num will first increment the value then display
    // the num++ will first display the value then increment it in next line .

    cout << num++ << "\n";
    cout << ++num;

    // bitwise operator

    int A, B, C;
    A = 10;
    B = 20;
    C = (A & B);
    cout << C;
    cout << "\n";

    // terniary operator

    int X = 48;
    int Y = 50;

    cout << ((X < Y) ? "i am right " : "i am flase ");

    cout << "\n";

    // switch case

    int age = 20;

    switch (age)
    {
    case 10:
        cout << "your age is 19 ";
        break;

    default:
        cout << "your age is 20";
        break;
    }
    cout << "\n";

    // while

    int i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
    }
    // after the while loop is over the value of i will be i = 5 , because it is postfix operator.
    cout << "\n";

    // do while

    do
    {
        cout << ++i << "\n";
    } while (i < 10);

    return 0;


    
}
