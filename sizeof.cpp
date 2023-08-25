#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "size of int is =" << sizeof(int) << endl;       // 4 bytes
    cout << "size of char is =" << sizeof(char) << endl;     // 1 byte
    cout << "size of float is =" << sizeof(float) << endl;   // 4 byte
    cout << "size of double is =" << sizeof(double) << endl; // 8 byte
    cout << "size of bool is =" << sizeof(bool) << endl;     // 1 byte

    // modifiers in c++
    // modifiers change the value of the primitive datatype
    // are modifiers that can be applied to integer data types (int, char, short, long, etc.) to specify their behavior and size.

    // signed
    // by default the int is signed , means we can store both -neg and +pos values in it .
    // example

    int a = -10;
    int b = 20;

    // unsigned int  
    // we cannot use sign here , we can only store positive values here , -neg values not allowed 

    unsigned int y = 20;


    // long 
    // it is used to store values larger than the regular int which is more than (-2147283648 to 2147283648)= normal range .

    long bigNumber = 2147283649L;
    cout<<bigNumber<< endl;;

    // short 
    // it is used to reduce the size of the int to reduce memory usage

    short small_number = 34;


    // long double 

    long double largeNum = -21472836499999999;
    cout<<largeNum;
}