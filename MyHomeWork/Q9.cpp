#include <iostream>
using namespace std;

string posOrNeg(float x){
	if(x>0){return " Positive";}
	else if(x<0){return " Negative";}
	else{return " ZERO!";}
}

main(){
	cout << posOrNeg(-10);
}
