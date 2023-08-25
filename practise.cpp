
// // sum of elements in the give array  arr[5] ={1,2,3,4,5};
// #include <iostream>
// #include <bits/stdc++.h>   // it is not recommended to use this library because it increases compile time instead we can use individal stl
// // like #include <array> etc
// using namespace std;

// int ab = 20;

// int main()
// {
//     int arr[] = {1, 2, 4, 90, 23, 56, 3, 5};
//     int len = sizeof(arr) / sizeof(arr[0]); // len =
//     // // cout<<len<<"\n";
//     // int sum=0;
//     // for (int i = 0 ; i<5; i++){
//     //     sum += arr[i];
//     // }

//     // cout<<sum;

//     // find the largest element in the given array

//     // sort(arr , arr+len);
//     // for ( int i= 0; i<len;i++){
//     //     cout<<arr[len-1]<<",";
//     //     break;

//     // }

//     // perform linear search in the given array

//     int element_to_search = 90;
//     bool flag = 1;
//     for (int i = 0; i < len; i++)
//     {

//         if (arr[i] == element_to_search)
//         {
//             cout << "element found at position " << i;
//             flag = 0;
//             break;
//         }
//     }

//     if (flag ==1 ){
//         cout<<"element not found !";
//     }

// }






















// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int arr[] = {1, 34, 6, 76, 6, 4, 57, 86, 6};
//     int len = sizeof(arr) / sizeof(arr[0]); // gives the length of an array

//     cout << "welcome to c++ \n";
//     cout << "this will  print on new line " << endl;
//     // float can hold values upto 7 digits corectly
//     // double can hold values upto 15 digits corectly
//     // after that it will print rubish values :)

//     // int can store up to 10 digits.
//     float sal_1 = 123.123456789012345678920;
//     double sal_2 = 123.123456789012345678920;

//     int num = 1234567890;
//     cout << num << endl;
//     cout << setprecision(7);
//     cout << "float" << sal_1 << "\n";
//     cout << "double" << sal_2 << "\n";

//     bool ny = true;

//     cout << ny << "\n";

//     string name = "ashish more";
//     cout << name << "\n";

//     int my_array[] = {23, 24, 4534, 2};



//     // multidimentional arrays
//     // data_type arr[rows][columns] = {{}{}};
//     // to find the total number of elements in myArray = row * col = x elements  

//     int rowSize, colSize;
//     cout << "enter the row size of array \n";
//     cin >> rowSize;
//     cout << "enter the column size of array \n";
//     cin >> colSize;
//     int my_arr[rowSize][colSize];

//     // taking input form the user
//     cout << "enter the value in the array \n";
//     for (int row = 0; row < rowSize; row++)
//     {
//         for (int col = 0; col < colSize; col++)
//         {
//             cin >> my_arr[row][col];
//         }
//     }

//     cout << endl;

//     // printing the value on the console

//     for (int row = 0; row < rowSize; row++)
//     {
//         for (int col = 0; col < colSize; col++)
//         {
//             cout << "my_arr[" << row << "][" << col << "]"
//                  << " = " << my_arr[row][col] <<endl;
//         }
//     }
// }





















// implementation of 3d array 
// 3d array is a implementation of 2d arrays 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){

// syntax                                                                               arr0             arr1
// int myArray1[how many 2d arrays ?][rows of 2d array][columns of 2d array] ={{{1,2,4},{2,2,4}} ,{{1,2,4},{2,2,4}}};
// example 
// int myArray1[2][2][3];
// to find the total number of elements in myArray = 2 * 2 * 3 = 12 elements 


//3d array
int myArray[2][2][3] ={{{10,20,30} ,{40,50,60}} ,{{70,80,90},{100,110,120}}};

// printing this array

for(int i =0;i<2;i++){

    for(int row =0;row<2;row++){

        for(int col =0;col<3;col++){
            cout << "myArray[" <<i<<"]["<< row << "][" << col << "]"<< " = " << myArray[i][row][col] <<endl;
        }
    }
}


// making the 3d array dynamic 

// taking input from the user

int arr_no , rowSize , colSize;


cout<<"This is 3d array \nenter the number of 2d arrays to insert :";
cin>>arr_no;
cout<<"enter the row size of 2d array :";
cin>>rowSize;
cout<<"enter the column size of 2d array :";
cin>>colSize;


int dynamic_array[arr_no][rowSize][colSize] ;

// inserting elements into this array 
cout <<"insert elements into this array \n";

for(int i =0;i<arr_no;i++){

    for(int row =0;row<rowSize;row++){

        for(int col =0;col<colSize;col++){
            cin>> dynamic_array[i][row][col];
        }
    }
}

//printing the dynamic array
cout<<"this is dynamic array that you created \n";
for(int i =0;i<arr_no;i++){

    for(int row =0;row<rowSize;row++){

        for(int col =0;col<colSize;col++){
            cout << "dynamic_array[" <<i<<"]["<< row << "][" << col << "]"<< " = " << dynamic_array[i][row][col] <<endl;
        }
    }
}
return 0;

}




