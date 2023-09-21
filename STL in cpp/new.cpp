// C++ program to initialize a vector from
// another vector.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> v1{1,3,434,3,3};

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << endl;
	}
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int myArray[] = { 5, 10, 15 };

//     vector<int> myVector(begin(myArray), end(myArray));

// 	for (int x : myVector)
// 		cout << x << " ";
// 		// 5 10 15
// }