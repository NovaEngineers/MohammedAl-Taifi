#include <iostream>
using namespace std;

float big(float x, int y){
	if(x>y){return x;}
	return y;
}

main(){
	cout << big(55,6);
}
