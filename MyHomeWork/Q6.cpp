#include <iostream>
using namespace std;

float big(float x, float y, float z){
		if(x>y and x>z){
		return x;
	}else if(y>x and y>z){
		return y;
	}else if(z>x and z>y){
		return z;
	}
}
main(){
	cout << big(987,558,64);
}
