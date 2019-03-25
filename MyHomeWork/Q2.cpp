#include <iostream>
using namespace std;

// Mohamed I. Al-Taifi

main(){
	int array[10] = {4,2,4,6,3,7,8,2,5,4}, search, counter = 0;
	
	for(int index=0; index <=9 ; index++){
		cout << " Value of element ("<<index+1<<")"<<" is ("<<array[index]<<")"<<endl;
	}
	cin >> search;
	for(int index=0; index <=9 ; index++){
		if(search == array[index]){
			cout << " Found in index "<< index+1 << endl;
			counter++;
		}
	}cout << " Repeated: "<< counter;

}
