#include <iostream>

using namespace std;

bool isPrime(long int factor)
{
	for(long int i = 2; i < factor; i++)
	{
		if(i%factor == 0)
			return false;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	long int num = 600851475143;
	int sqr = sqrt(num) + 1;
	long int prime;
	for (long int i = 0; i < num; ++i)
	{
		if(i%num == 0)
		{
			if(isPrime(i))
				prime = i;
		}
	}
	cout << prime << endl;
	return 0;
}