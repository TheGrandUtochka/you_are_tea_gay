#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned int dec;
	int count = 0;
	cin >> dec;
	
	#Цикл перевода из десятичной СС в двоичную (выводятся только значение единичек)
    for(int i = 0; dec > 0; i++)
    {
		if ((dec % 2) == 1)
		{
			count += 1;
		}
	
        dec /= 2;
    }
    
    cout << count;
	
	return 0;
}
