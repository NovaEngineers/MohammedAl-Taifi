#include <iostream>
using namespace std;

float factorial(float x){
	int result=1;
	for(int index=1; index<=x; index++){
		result = result * index;
	}
	return result;
}

main(){
	float userNumber;
	cout << " Enter a number to get its factorial: ", cin >> userNumber;
	cout << factorial(userNumber);
	
}
