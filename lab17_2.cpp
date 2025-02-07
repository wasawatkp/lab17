#include<iostream>
using namespace std;

void myString(char *&p, int N){
	p = new char[N + 1];    
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
