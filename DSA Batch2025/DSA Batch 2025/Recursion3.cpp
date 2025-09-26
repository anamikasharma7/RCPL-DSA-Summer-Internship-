#include <iostream>


void func(int num){
	
	if( num > 10 )
		return;
	
	std::cout<< num <<std::endl;
	
	func( num+1 );
}

int main(){
	
	func( 1 );
	
	return 0;
}