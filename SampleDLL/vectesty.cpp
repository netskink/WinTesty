#include "stdafx.h"
#include <iostream>
#include "vectesty.h"
#include <vector>
using namespace std;

//__declspec(dllexport) void aFunctionToCreateALib(void) {

// For simple unit testing.  Return 0 on a good 
// routine pass. Otherwise.
__declspec(dllexport) int VecTesty::avectesty(void) {
//int VecTesty::avectesty(void) {

	// create a vector to store int
	vector<int> vec;
	int i;

	// display the original size of vec
	cout << "Vector size = " << vec.size() << endl;

	// push 5 values into the vector
	for (i = 0; i < 5; i++) {
		vec.push_back(i);
	}

	// display the extended size of vec
	cout << "extended vector size = " << vec.size() << endl;

	// access 5 values from the vector
	for (i = 0; i < 5; i++) {
		cout << "values of vec[" << i << "] = " << vec[i] << endl;
	}

	// use iterator to access the values
	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}

	return 0;
}



