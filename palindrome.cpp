#include <iostream>

using namespace std;

int main()
{
    unsigned short int x;
    int array[16], j = 0, count = 0;
    
    cin >> x;
    int y = x;
    
    for (int i = 0; i < 16; i++)
    {
        array[i] = x % 2;
        x /= 2;
    }

    for (int i = 15; i > 7; i--)
    {
        if (array[j] == array[i])
        {
        	count += 1;
		}
        j++;
    }
    
    if (count == 8)
    {
    	cout << y << " is a bitwise palindrome" << endl;
	} else {
		cout << y << " is not a bitwise palindrome" << endl;
	}
    return 0;
}
