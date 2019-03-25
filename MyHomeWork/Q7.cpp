#include <iostream>
using namespace std;

void big(float x, float y, float z){
	if(x>y and x>z){
		cout << x;
	}else if(y>x and y>z){
		cout << y;
	}else if(z>x and z>y){
		cout << z;
	}
}
main(){
	big(987,558,6466);
}
