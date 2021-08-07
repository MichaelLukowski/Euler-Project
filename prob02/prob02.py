c = 2
p = 1
even_fibs_sum = 2

while c < 4000000:
	new = p + c

	if new % 2 == 0:
		even_fibs_sum += new
	
	p = c
	c = new

print(even_fibs_sum)