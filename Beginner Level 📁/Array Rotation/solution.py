def swap(arr, i, j):
    temp = arr[i]
    arr[i] = arr[j]
    arr[j] = temp

def reverse(arr, start, end):
    while start < end:
        swap(arr, start, end)
        start += 1
        end -= 1

def left_rotate(arr, d):
    n = len(arr)
    d %= n  # Handle shifts greater than array length
    if d == 0:
        return  # No rotation needed

    reverse(arr, 0, d - 1)  # Reverse the first d elements
    reverse(arr, d, n - 1)  # Reverse the remaining elements
    reverse(arr, 0, n - 1)  # Reverse the entire array

def print_array(arr):
    print(*arr)  # Print the array elements in a more concise way

if __name__ == "__main__":
    arr = [1, 2, 3, 4, 5, 6, 7]
    d = 2  # Number of positions to rotate left

    left_rotate(arr, d)
    print_array(arr)
