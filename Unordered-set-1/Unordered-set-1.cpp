// Unordered-set-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_set>
using namespace std;
template<typename T>
void printCont(const T& cont)
{
	for (auto& i : cont)
	{
		cout << "\t" << i;
	}
	cout << endl;
}
int main()
{
    unordered_set  <int> s{ 10, 2, 34, 5 };
	printCont(s);
}


