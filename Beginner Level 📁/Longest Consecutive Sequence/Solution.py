def longest_consecutive(nums):
    # Convert the list to a set to allow O(1) lookups
    num_set = set(nums)
    longest_streak = 0

    # Iterate through the numbers
    for num in num_set:
        # Start counting only if num is the beginning of a sequence
        if num - 1 not in num_set:
            current_num = num
            current_streak = 1

            # Count how many consecutive numbers exist
            while current_num + 1 in num_set:
                current_num += 1
                current_streak += 1

            # Update the longest streak found
            longest_streak = max(longest_streak, current_streak)

    return longest_streak

# Test Cases
print(longest_consecutive([100, 4, 200, 1, 3, 2]))  # Output: 4
print(longest_consecutive([0,3,7,2,5,8,4,6,0,1]))   # Output: 9
