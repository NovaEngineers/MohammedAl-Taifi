#include <iostream>
using namespace std;

main(){
	//Program 1
//	int aArray[10]={5,9,2,4,8,2,6,4,9,2}, bArray[10];
//	
//	for(int index=0; index <= 10; index++){
//		bArray[index] = aArray[index];
//	}
//	
//	for(int index=0; index <= 10; index++){
//		cout << bArray[index] << endl;
//	}
	
	
	//Program 2

//	int aArray[10]={5,9,2,4,8,2,6,4,9,2}, bArray[5], cArray[5];
//	
//	int index = 0, cIndex = 0;
//	while(index <= 4){
//		bArray[index] = aArray[index];
//		index++;
//	}
//	while(index <= 9){
//		cArray[cIndex] = aArray[index];
//		index++;
//		cIndex++;
//	}
//	
//	for(int index=0; index <= 4; index++){
//		cout << bArray[index] << endl;
//	}
//	for(int index=0; index <= 4; index++){
//		cout << cArray[index] << endl;
//	}

	//Program 3
	int aArray[10], bArray[5]={5,9,2,4,8}, cArray[5]={2,6,4,9,2};
	
	int index = 0, cIndex = 0;
	while(index <= 4){
		bArray[index] = aArray[index];
		index++;
	}
	while(index <= 9){
		cArray[cIndex] = aArray[index];
		index++;
		cIndex++;
	}
	
	for(int index=0; index <= 4; index++){
		cout << bArray[index] << endl;
	}
	for(int index=0; index <= 4; index++){
		cout << cArray[index] << endl;
	}
	
}
