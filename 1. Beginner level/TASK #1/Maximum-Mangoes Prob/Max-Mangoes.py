
def check(n, m, x, y, vl):
	
	# Store the coins
	temp = m

	# If watermelons needed are greater
	# than given watermelons
	if (vl > n):
		return False

	# Store remaining watermelons if vl
	# watermelons are used to buy mangoes
	ex = n - vl

	# Store the value of coins if these
	# watermelon get sold
	ex *= y

	# Increment coins by ex
	temp += ex

	# Number of mangoes that can be buyed
	# if only x coins needed for one mango
	cr = temp // x
	if (cr >= vl):
		return True
	return False

# Function to find the maximum number of mangoes
# that can be bought by selling watermelons
def maximizeMangoes(n, m, x, y):
	l = 0
	r = n
	ans = 0
	while (l <= r):

		
		mid = l + (r - l) // 2

		
		if (check(n, m, x, y, mid)):
			ans = mid
			l = mid + 1

		
		else:
			r = mid - 1

	return ans

# Driver Code
if __name__ == '__main__':
	

	W = 4
	C = 8
	x = 4
	y = 4


	print(maximizeMangoes(W, C, x, y))
	
