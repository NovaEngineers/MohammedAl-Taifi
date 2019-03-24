#include <iostream>
using namespace std;

main(){
	int array[10], maxElement=array[1], minElement=array[0], sumElements=0;
	
	for(int index=0; index <=9 ; index++){
		cout << " Enter a value for element ("<<index+1<<"): ", cin >> array[index];
	}
	
	for(int index=0; index <=9 ; index++){
		cout << " Value of element ("<<index+1<<")"<<" is ("<<array[index]<<")"<<endl;
		if(array[index] > maxElement){
			maxElement = array[index];
		}
		if(array[index] < minElement){
			minElement = array[index];
		}
		sumElements += array[index];
	}
	
	cout<<" The max element is ("<<maxElement<<")"<<endl
		<<" The min element is ("<<minElement<<")"<<endl
		<<" The sum element is ("<<sumElements<<")";
}
