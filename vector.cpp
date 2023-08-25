// vector is a dynamic array , we can dynamically alocate size to it 

#include <iostream>
#include <vector>
using namespace std;

int main (){

    

    // creating a vector array 
    vector<int> myArray;


    // capacity = the amount of meomory alocated to the array , whenever we store any element it doubles its capacity 
    cout <<"capacity :"<<myArray.capacity()<<endl;


    // inserting elements into this array 
    myArray.push_back(10);   // this will enter the element 10 at the last position .

    // trying to push back a normal array into this array
    // this doesent work if we try to push the whole array into it , but single element works fine
    int normalArray[8]={1,2,3,4,5,6,7,8};  

    // myArray.push_back(normalArray[3]);

    for (int i=0;i<8;i++){
        myArray.push_back(normalArray[i]);
    }

    //checking the capacity again 
    cout<<"capacity "<<myArray.capacity()<<endl;

    // trying to print the vector array 



    // size = number of elements present in the array 
    cout << "size of the vector array "<<myArray.size()<<endl;

    // we can use .at() to access the elements in the array , and also we can use the [] to access the elements 
    cout <<"element at 2nd position "<<myArray.at(2)<<endl;

    //first element
    cout << "first element of array is : "<<myArray.front()<<endl;

    //last element 
    cout << "last element of array is : "<<myArray.back()<<endl;


    // printing the elements before poping 

    // this is a range based for loop , or a for_each loop , where it takes each element form the array and the perform some operations on it
    for (int i :myArray){
        cout <<i<<" ";
    }


    



    

}