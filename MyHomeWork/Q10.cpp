#include <iostream>
using namespace std;

string prime(int x){
	int checker=0;
	for(int index=x;index>0;index--){
		if(x%x==0 and x%1==0){
			checker++;
		}
	}
	if(checker==2){
		cout << x << " is not a prime";
	}else{
		cout << x << " is not a prime";
	}
}

main(){
	prime(8);
}
