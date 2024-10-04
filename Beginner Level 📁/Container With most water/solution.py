from typing import List

class Solution:
    def maxArea(self, height: List[int]) -> int:
        max_area = 0
        left = 0
        right = len(height) - 1

        while left < right:
            # Calculate the area with the current left and right pointers
            max_area = max(max_area, (right - left) * min(height[left], height[right]))
            
            # Move the pointers inward based on the shorter height
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
                
        return max_area

# Example usage:
if __name__ == "__main__":
    solution = Solution()
    height = [1,8,6,2,5,4,8,3,7]
    print("Maximum area:", solution.maxArea(height))


            