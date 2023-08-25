// // if we declare a variable and perform some operations on it , it will give some garabage value to it

// #include <iostream>
// #include <string>
// using namespace std;

// // defining marco
// #define area(l, b) (l * b)
// int main()
// {
//     // macros are a peice of code which we can replace when we call it .
//     int l = 10, b = 40;
//     int a = area(l, b);
//     cout << "area" << a;

//     string my_string;
//     cout << "\n enter any string :";
//     getline(cin, my_string);
//     cout << "the sentecence is :" << my_string << endl;

//     my_string.append("this is appended");
//     cout << my_string;

//     // if else staements
//     if (true)
//     {
//         cout << "the if statement is true !" << endl;
//     }
//     else if (true && false)
//     {
//         cout << "this staement is false " << endl;
//     }
//     else
//     {
//         cout << "nothing" << endl;
//     }

//     // switch case

//     int value = 20;

//     switch (value)
//     {
//     case 1:
//     {
//         cout << "this is 1" << endl;
//         break;
//     }
//     case 2:
//     {
//         cout << "this is 1" << endl;
//         break;
//     }
//     case 5:
//     {
//         cout << "this is 1" << endl;
//         break;
//     }
//     case 10:
//     {
//         cout << "this is 1" << endl;
//         break;
//     }
//     case 20:
//     {
//         cout << "this is 20" << endl;
//         break;
//     }
//     }

//     // nested if statement
//     if (value == 20)
//     {
//         if (a == 400)
//         {
//             cout << "this is nestes if statement" << endl;
//         }
//     }

//     // jump statements


    
// }






// #include <iostream>
// using namespace std;

// int main(){
//     long long  a = 23252 * 2342342 / 200;

//     cout <<a;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     double a = static_cast<double>(23252 * 2342342) / 200;

//     cout << a;
//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    // long long a = static_cast<long long>(23252) * 2342342 / 200;

    long long a = 23252 * 234234;

    cout << a;
    return 0;
}
