#include <iostream>
#include <iomanip>
using namespace std;
 
double frac(int n, int k)
{
  double sum = 1;
  for (int i = 1; i <= k; i++)
    sum *= (n - i + 1) / float(i);
  return sum;
}
 
void pascal(unsigned int n) {
	int i = n;
	for (int j = 0; j <= i; j++) {
		cout << frac(i, j);
		if (i != j)
			{
				cout << ", ";
			}
	}
}
int main(){
	unsigned int n;
	cin >> n;
	pascal(n);
	return 0;
}
