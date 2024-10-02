def min_jumps(arr):
    n = len(arr)
    if n <= 1:
        return 0  # Already at the last index

    if arr[0] == 0:
        return -1  # Can't move anywhere from the start

    # Initialize variables
    max_reach = arr[0]  # The farthest index we can currently reach
    steps = arr[0]      # Steps remaining in the current jump
    jumps = 1           # We need at least one jump to move forward

    for i in range(1, n):
        if i == n - 1:
            return jumps  # Reached the end

        # Update max_reach to the farthest we can get from the current index
        max_reach = max(max_reach, i + arr[i])

        # We used a step to get to index i
        steps -= 1

        # If no more steps remain
        if steps == 0:
            # We need to make another jump
            jumps += 1

            # If we can't move further, return -1
            if i >= max_reach:
                return -1

            # Reset steps for the new jump
            steps = max_reach - i

    return -1  # If we never reach the last index

# Example usage
arr1 = [2, 3, 1, 1, 4]
print(min_jumps(arr1))  # Output: 2

arr2 = [3, 2, 1, 0, 4]
print(min_jumps(arr2))  # Output: -1
