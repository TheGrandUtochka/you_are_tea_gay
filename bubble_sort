#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	
	const int N = 1000;
	int array[N];
	
	srand(time(NULL));
	
	cout << "Array: " << endl;
	for (int i = 0; i < N; i++)
	{
		array[i] = rand() % (2 * 10000000000 + 1) - 10000000000;
		
		cout << array[i] << "|";
	}
	
	
	cout << endl << "Bubble-sorted array: " << endl;
	int temp;
	int count = 0;
	for (int i = 0; i < (N - 1); i++) 
	{
		for (int j = 0; j < (N - i - 1); j++) 
			if (array[j] > array[j + 1]) 
		{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			count += 1;
		}
	}
	
	for (int i = 0; i < N; i++) {
        cout << array[i] << "|";
    }
	cout << endl << "Count of permutations: " << count;
	
	return 0;
}
