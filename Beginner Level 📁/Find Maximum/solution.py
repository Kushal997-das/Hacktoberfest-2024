def find_maximum(arr):
    if not arr:
        return None  # In case of an empty list, though problem specifies there's at least one integer
    max_value = arr[0]
    for num in arr:
        if num > max_value:
            max_value = num
    return max_value

# Example usage:
if __name__ == "__main__":
    arr = [3, 1, 4, 1, 5, 9, 2]
    print(f"The maximum value is: {find_maximum(arr)}")
