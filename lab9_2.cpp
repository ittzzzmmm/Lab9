#include<iostream>
using namespace std;

//Write the function printO() here

	void printO(int N, int M)
	{
    	if(N>0 && M>0){
        	for(int i = 1; i <=N; i++){
            	for(int j =1; j <=M; j++){
                	cout << "O" ;
					}
				cout << "\n" ;
				}
	}else{
		cout << "Invalid input" ;
	}
	return;
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
