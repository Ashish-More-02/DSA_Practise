// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {

//     // there are 2 ways to defining strings
//     //1) using string datatype
//     // 2) using array of char datatype

//     string my_str = "This is a sample string";
//     cout << my_str;

//     char name[7] = {'A', 's', 'h', 'i', 's', 'h', '\0'};
//     cout << endl<< name;

//     // concatination of string can be done using 2 methods , using + and using .append()
//     string str1 = "I am a  ", str2 = "programmer";
//     string str3 = str1 + str2;

//     string str4 = str1.append(str2);
//     cout <<endl << str3;    // both the statements give the same output
//     cout <<endl<<str4;

//     // appending elements to the string
//     string random_string = "this is a apple";
//     random_string.push_back('A');
//     cout << random_string;

//     // // length of the string   , we can use any both give the same result
//     // cout <<str4.length()<<endl;
//     // cout <<str4.size();

//     // // we can access any string using [] eg :
//     // cout << str4[11];

//     // However, cin considers a space (whitespace, tabs, etc) as a terminating character,
//     // which means that it can only store a single word (even if you type many words):
//     string myName, fullName;
//     cout <<"enter your full name :";
//     cin >> myName;
//     cout <<myName<<endl;
//     cin.ignore();

//     cout <<"enter your full name again :";
//     getline(cin , fullName);
//     cout << fullName;

//     //compare function compares two strings lexographically
//     string str1 = "apple";
//     string str2 = "zebra";

//     int result = str1.compare(str2);

//     if (result < 0)
//     {
//         cout << "str1 is less than str2" << endl;
//     }
//     else if (result > 0)
//     {
//         cout << "str1 is greater than str2" << endl;
//     }
//     else
//     {
//         cout << "str1 is equal to str2" << endl;
//     }

//     cout << result;

// }

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // program to reverse a string
    string str = " Coding Ninjas";
    reverse(str.begin(), str.end());
    cout << str;

    // using inbuild sort function on strings
    string str1 = " Ashish More";
    sort(str1.begin(), str1.end());
    cout << str1;
    return 0;
}