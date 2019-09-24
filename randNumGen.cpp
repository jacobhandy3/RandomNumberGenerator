// RandNumGen.cpp : Defines the entry point for the console application.
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>

//compute the random number
void randNum(int numDIGITS, std::vector<int> &vec);

int main()
{
	srand((unsigned)time(NULL));

	using namespace std;

	int digits;
	bool done = false;
	//loop until user is done
	while (done == false)
	{
		std::cout << "How many random numbers do you want?" << std::endl;
		//get digits
		std::cin >> digits;
		//pointer to array from randNum
		std::vector<int> nums;
		randNum(digits, nums);
		//display nums
		for (int i = 0; i < digits; i++)
		{
			std::cout << nums[i];
		}
		//check if user is done
		std::cout << std::endl << "Are you done?" << std::endl;
		std::string ans;
		std::cin >> ans;
		if (ans == "yes" || ans == "Yes"|| ans == "YES")
		{
			done = true;
		}
		else if (ans == "no" || ans == "No" || ans == "NO")
		{
			done = false;
		}
		else { std::cout << "Undefined answer!!! EXITING!" << std::endl; return 0; }
	}

	std::cout << std::endl;
    return 0;
}

void randNum(int numDIGITS, std::vector<int> &vec)
{
	for (int i = 0; i < numDIGITS; i++)
	{
		vec.push_back(rand() % 9+1);
	}
}