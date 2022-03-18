#include <cmath>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	if (n % 2 != 0 and n >= 3)
	{
		cout << pow(n, 2) - (n - 1) * 2;
	} else {
		cout << "Wrong number";
	}
	return 0;
}
