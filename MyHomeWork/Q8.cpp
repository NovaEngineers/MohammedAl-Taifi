#include <iostream>
using namespace std;

void symbolPrinter(float x,char y){
	for(int index=0; index<x;index++){
		cout<<y;
	}
}

main(){
	symbolPrinter(5,'*');
}
