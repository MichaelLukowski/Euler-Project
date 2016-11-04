#include <iostream>

using namespace std;

int add(int first, int second)
{
	return first + second;
}

int main(int argc, char const *argv[])
{
	int first, second, temp, sum;
	first = 1; second = 2; sum = 0;
	while((first + second) < 4000000)
	{
		if(add(first, second)%2 == 0)
			sum += add(first, second);
		temp = second;
		second = add(first, second);
		first = temp;
	}
	sum += 2;
	cout << sum << endl;
	return 0;
}