#include<iostream>

using namespace std;

int main(){
	
	int array[] = {1,2,3,4,5};
	int* array_ptr = NULL;

	array_ptr = array;

	cout << array_ptr << endl;
	cout << array_ptr[1] << endl;	 

	return 0;
}