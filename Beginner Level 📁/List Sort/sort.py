def sort_list(numbers, ascending=True):
    """Sort the list of numbers."""
    return sorted(numbers, reverse=not ascending)

def main():
    print("Welcome to the List Sorting Program!")
    
    # Get a list of numbers from the user
    user_input = input("Enter numbers separated by spaces: ")
    # Convert input string to a list of integers
    numbers = list(map(int, user_input.split()))

    # Ask user for sorting order
    order = input("Do you want to sort in ascending (a) or descending (d) order? (a/d): ").lower()
    
    if order == 'a':
        sorted_numbers = sort_list(numbers, ascending=True)
        print("Sorted List (Ascending):", sorted_numbers)
    elif order == 'd':
        sorted_numbers = sort_list(numbers, ascending=False)
        print("Sorted List (Descending):", sorted_numbers)
    else:
        print("Invalid choice! Please enter 'a' for ascending or 'd' for descending.")

if __name__ == "__main__":
    main()

