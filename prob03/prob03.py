# appending the path so I can use tools as a package
# import sys, os
# sys.path.append(os.path.join(os.path.dirname(__file__), '..'))

# import math

# from tools.sieveOfErat import sieve

number = 600851475143

def isPrime(num):
	for i in range(2,math.ceil(math.sqrt(num))):
		if num%i == 0:
			return False
	return True

for i in reversed(range(2, math.ceil(math.sqrt(number)))):
	if number%i == 0 and isPrime(i):
		print(i)
		break