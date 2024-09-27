def maxTripletSum(lst, n):
    max_sum = 0
 
    for i in range(n):
        max_value_1 = 0
        max_value_2 = 0

        for j in range(i):
            if (lst[j] < lst[i]):
                max_value_1 = max(max_value_1, lst[j])

        for j in range((i + 1), n):
            if (lst[j] > lst[i]):
                max_value_2 = max(max_value_2, lst[j])
 
                if (max_value_1 > 0 and max_value_2 >0):
                    max_sum = max(max_sum, max_value_1 + lst[i] + max_value_2)
 
    return max_sum
 
lst = list(map(int, input("Enter the list: ").strip().split()))
n = len(lst)
print(maxTripletSum(lst, n))