#include <iostream>
#include <array>
using namespace std;

int main (){

    // this is basic array , and it is static in nature 
    int arr[5]={1,3,4,5};

    // stl array or dynamic array 
    array <int, 4> my_array = {10,20,30,40};

    // finding the size 
    int size = my_array.size();
    // cout<<size;

    //we can also access the array using .at()  funcition
    cout <<endl<< "the value of the element at 2 index is : "<<my_array.at(2)<<endl;

    //we can also check if the array is empty or not 
    cout<<"empty or not : "<<my_array.empty()<<endl;   // gives boolean value 

    //first element
    cout << "first element of array is : "<<my_array.front()<<endl;

    //last element 
    cout << "last element of array is : "<<my_array.back()<<endl;



}