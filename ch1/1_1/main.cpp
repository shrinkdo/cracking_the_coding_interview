/* Implement an algorithm to determine if a string has all unique characters. No additional data structures */

#include <iostream>

using namespace std;

/*
1. Nested iterations. (N^2)
2. Sorted first. (NlogN)
3. A boolean array of all characters. (N)
*/

const int NUM_CHARS = 256;

bool is_all_unique(char* str)
{
	bool appeared[NUM_CHARS];
	
	for (int i = 0; i < NUM_CHARS; ++i)
		appeared[i] = false;

	char* cur = str;
	while (*cur != '\0')
	{
		int index = *cur;
		cout << "index: " << index << endl;
		if (appeared[index])
			return false;
		
		appeared[index] = true;
		cur++;	
	}

	return true;
	
}

int main()
{
	char* test_1 = "abcde";
	cout << is_all_unique(test_1) << endl;

	char* test_2 = "abbcde";
	cout << is_all_unique(test_2) << endl;

	return 0;
}
