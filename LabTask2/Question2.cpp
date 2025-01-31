#include <bits/stdc++.h>
using namespace std;

void* Inc_Array(void* a, int size){
	int* arr = static_cast<int*>(a);
	for(int i = 0 ; i < size;i++){
		arr[i]++;
	}
	return arr;
}

int main(int argc, char** argv){
	int* arr = new int[argc-1];
	for(int i = 0 ; i < argc-1; i++){
		arr[i] = atoi(argv[i+1]);
	}
//	current arr
	void* newarr = Inc_Array(static_cast<void*>(arr), argc-1);
	int* result = static_cast<int*>(arr);
//	Result
	for(int j = 0 ; j < argc-1 ; j++){
		cout<<result[j]<<" ";
	}
	
	delete[] arr;
	return 0;
}
