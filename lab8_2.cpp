#include<iostream>
using namespace std;

void printO(int Row, int Column){
	if(Row>0 && Column > 0){
		for(int j = 1; j<=Row; j++){
			for(int i=1; i<=Column; i++){
			cout << "O";
			}
			cout << endl;
		}
	}
	else{
		cout << "Invalid input";
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
