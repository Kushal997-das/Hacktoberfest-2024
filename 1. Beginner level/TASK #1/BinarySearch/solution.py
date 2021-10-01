# Searching an element X in array using Binary search
# Method used is Recursion
# Time Complexity = O(log'n) | Space Complexity = O(1)

def binary_search(arr, start, end, x):
    if start <= end:
        mid = (start + end) // 2    # creating a mid variable which gives a integer value
        if arr[mid] == x:   # checking if x is at mid position
            return mid
        elif arr[mid] < x:   # if element at mid position is smaller than x, start point shifts to mid + 1
            return binary_search(arr, mid+1, end, x)
        else:           # if element at mid position is greater than x,end point shifts to mid -1
            return binary_search(arr, start, mid-1, x)
    return -1       # -1 implies not found


# Driver's Code
arr = [10, 20, 30, 40, 50]
x = 41

result = binary_search(arr, 0, len(arr)-1, x)

if result == -1:
    print("Number not found in the array")
else:
    print("number found at index", result)
