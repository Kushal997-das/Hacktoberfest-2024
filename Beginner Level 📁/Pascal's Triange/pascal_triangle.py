def generate_pascals_triangle(numRows):
    triangle = []
    
    for i in range(numRows):
        # Start with a row of 1's
        row = [1] * (i + 1)
        
        # Fill the inner values (except for the first and last element, which are always 1)
        for j in range(1, i):
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j]
        
        triangle.append(row)
    
    return triangle

# Example usage:
numRows = 5
print(generate_pascals_triangle(numRows))
