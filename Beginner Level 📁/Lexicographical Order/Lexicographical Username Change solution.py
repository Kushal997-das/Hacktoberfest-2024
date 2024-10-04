def possibleChanges(usernames):
    result = []
    
    # Iterate through each username
    for username in usernames:
        found = False
        
        # Traverse through the username characters
        for i in range(len(username)):
            for j in range(i + 1, len(username)):
                # Check if there is a lexicographically smaller character later in the string
                if username[i] > username[j]:
                    found = True
                    break
            if found:
                break
        
        # Append "YES" if a valid swap was found, otherwise "NO"
        if found:
            result.append("YES")
        else:
            result.append("NO")
    
    return result

# Example usage:
usernames = ["bca", "abc", "acb"]
print(possibleChanges(usernames))  # Output: ["YES", "NO", "YES"]
