// #include <iostream>
// using namespace std;

// // syntax of a function

//     // return_type function_name (parameter1, parameter2. ...){
//                      // function body
//     //  }

// int add(int a, int b)
// {
//     int c = a + b;
//     cout<<c<<"\n";
//     return c+=b;
// }

// int main()
// {
//   //calling the function
//   int num1=10;
//   int num2=30;
//   float _box_1 = add(num1, num2);
//   cout<<_box_1;

// }

// #include <iostream>
// using namespace std;

// // if we call the function before declaring it then it will not work , but we can use function prototype
// // FUNCTION PROTYPING 


// // if we give any value in the function definition itself then it will become its 'default.
// int addFun(int a , int b=10);

// int main (){
//     const int constant_varibale = 33;
//     // calling the function before declaring it
//     addFun(10);
// }

// // declaring the function

// int addFun(int a , int b ){
//     cout <<"addition of a and b is : "<<a+b;
// }



















// // inline function

// // if we make any function as inline the function body should be less than 3-4 lines , then only the inline will work properly

// #include <iostream>
// using namespace std;

// inline int add(int a, int b)
// {
//     cout << a + b;
// }

// int new_function(int &x){
//     int a ; int b=30;
//     x+=b;
    
// }

// int main()
// {
//     add(19, 20);

//     cout << "hello world";

//     // call the function by value
//     add(1, 4);


//     // call the function by reference

//     // call by reference is simple it modifies the value which is passed into the function , if the function modifies it .

//         int y =10;
//         int &x = y;      // &x is a reference to y and value of y is 10 
//         // so , &x = y =10  :> &x = 10 , it is pointing to the same variable 
//         // and x will also hold the same value and if we change the value of x then the value of y will also change
//         // &x holds the address of y .which is (50x61ff08) .

//         cout<<&x;
//         cout<<"\n\n\n\n";
//         cout<<y<<endl;
//         new_function(y);
//         cout<<y<<endl;

//     return 0;
// }














// -------------------------------------------------------------------------------------------------------------------------



// #include <iostream>
// #include <cmath>
// #include <complex>   // it has the pow() functions
// using namespace std;

// // a function to check which number is greater 
// // now this function is not returning something so we can also denote it by void , but using int will not cause any problem here also 

// int maxNum(int a , int b){

//     if (a==b){
//         cout <<"both numbers are same : "<<a<<endl;
//     }
//     else if (a>b){
//         cout <<a<<" is greater than "<<b<<endl;
//     }
//     else {
//         cout <<a<<" is less than "<<b<<endl;
//     }
// }

// int main (){

//     // calling the maxNum function in our main function 
//     int num1 , num2;

//     cout<<"enter a number ";
//     cin>>num1;
//     cout<<"enter another number ";
//     cin>>num2;

//     maxNum(num1,num2);

//     int randomVar = pow(2,5);





//     // in-built functions in cpp
//     // i just now wrote a function which compares two numbers and tells which is maximum and which is minimum , but it is so cool that these functions are already written by someone and and included in the cmath header , which are ready to use

//     // these are just simple functions just like our functions to use ! isin't it so cool!

//     // so i will use these functions and show you now 

//     int maximum_number = max(num1,num2);
//     cout <<maximum_number;

//     int minimum_number = min(num1,num2);
//     cout <<minimum_number;

//     // it can instantly give me the answer , no need to write the logic for this code , these are some simpler functions but there are also very complex in built functions 


//     return 0;
// }









// -------------------------------------------------------------------------------------------------------------------------

// 1) function with no argument and return value 



#include <iostream>
using namespace std;

void myfunc (){
    cout <<"hello world ";

    if (true){
        cout << "\thappy coding !";
    }
}


// 2) function with argument and no return value

void myfunc2(int a,int b){

    cout <<endl<<a+b;
}

// 3) function with no argument but returns a value

int myfunc3(){
    int a= 20 ;
    int b =30;

    if (a<b){
        cout <<"a is less than b";
        return a ;
    }
    else if (a>b){
        cout <<"b is less than a ";
        return b;
    }
}

// 3) function with argument and returns a value

int myfunc4(int a , int b=50){
    int sum = a +b;
    return sum;
}

int main (){

    // calling the function 
    myfunc();

    myfunc2(4,6);

    int container = myfunc3();
    cout<<container;

    int container2 = myfunc4(34,66);

    return 0;
}















// -------------------------------------------------------------------------------------------------------------------------

// function overloading = means we can use the same function name with different 1) number 2) type of arguments .

