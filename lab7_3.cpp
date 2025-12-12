#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
	char n_char;
	if ( x >= 'B' and x <= 'Z'){
		n_char = x - 1;
	}
	else if(x == 65){
		n_char = 'Z';
	}
	else{
		n_char = '0';
	}
	return n_char;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}