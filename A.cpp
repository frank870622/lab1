#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int n;
	cin >> n;
	while ((cout << n << " ") && (n != 1)){
	if(n%2 == 1)	n = 3 * n + 1;
	else n = n / 2;
	}
	return 0;
}

