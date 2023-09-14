#include <iostream>
#include <array>
using namespace std;

int main (){

    // int a ;
    // cout <<"enter the size of the dynamic array ";
    // cin>>a;

    //normal array 
    int basicArray[4]={1,2,3,4};

    // dynamic array , STL array
    array<int,4> stlArray ={10,20,30,40};

    // finding the size 
    int size = stlArray.size();
    // cout<<size; 

    //printing the array 
    for (int i=0;i<size;i++){
        cout<<stlArray[i]<<" ";
    }

    //we can also access the array using .at()  funcition
    cout <<endl<< "the value of the element at 2 index is : "<<stlArray.at(2)<<endl;

    //we can also check if the array is empty or not 
    cout<<"empty or not : "<<stlArray.empty()<<endl;   // gives boolean value 

    //first element
    cout << "first element of array is : "<<stlArray.front()<<endl;

    //last element 
    cout << "last element of array is : "<<stlArray.back()<<endl;

    

    return 0;

}