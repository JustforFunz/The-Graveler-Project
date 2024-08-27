#include <iostream>
#include <vector>
#include <stdio.h>
#include <chrono>

using namespace std;

int main()
{
	srand(time(NULL));

	auto start = std::chrono::high_resolution_clock::now();
	int numbers = 0;
	int rolls = 0;
	int maxOnes = 0;
	int PP = 56;

	while (numbers < 177 && rolls < 1000000)
	{	
		while (PP > 0 )
		{
			if (int roll = rand() % 4 == 0)
			{
				numbers++;
			}
			else {
				PP--;
				numbers++;
			}
		}
		rolls++;
		if (numbers > maxOnes)
		{
			maxOnes = numbers;
		}
		numbers = 0;
		PP = 56;
	}
	auto end = std::chrono::high_resolution_clock::now();
	cout << "Max number of turns: " << maxOnes << endl;
	cout << "Number of rolls: " << rolls << endl;
	cout << "Time: " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << " " << endl;
	cout<<"\n\n"<<endl;

	return 0;
}