#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char *argv[]){
	int n = atoi(argv[1]);
	while(1 == 1){
	cout << n << " ";
	if(n == 1) return 0;
	if(n%2 == 1)	n = 3*n+1;
	else n = n/2;
	}
	return 0;
}

