import math

def sieve(n):
	# take in a integer to 
	numbers = list(range(2,n))
	for i in range(2,math.ceil(math.sqrt(n))):
		for j in range(i*2, n, i):
			if j in numbers:
				numbers.remove(j)
	return numbers
