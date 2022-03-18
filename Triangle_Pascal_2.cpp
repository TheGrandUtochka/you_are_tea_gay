#include <iostream>
using namespace std;

double frac(int n,int k)
{
  double sum = 1;
  for (int i = 1; i <= k; i++)
    sum *= (n - i + 1)/float(i);
  return sum;
}

void pascal(unsigned int n) {
	for (int i = 0; i <= n - 1; i++) {
		for (int j = 0; j <= i; j++) {
			cout << frac(i, j) << " ";
		}
		cout << endl;
	}
}
int main(){
	unsigned int n;
	cin >> n;
	pascal(n);
	return 0;
}
