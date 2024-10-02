class Solution(object):
    def spiralOrder(self, matrix):
        frow = 0
        lrow = len(matrix)
        fcol = 0
        lcol = len(matrix[0])
        ret = []
        while len(ret) < len(matrix) * len(matrix[0]):
            for i in range(fcol, lcol):
                ret.append(matrix[frow][i])
            frow += 1

            for i in range(frow, lrow):
                ret.append(matrix[i][lcol - 1])
            lcol -= 1

            if frow < lrow:
                for i in range(lcol - 1, fcol - 1, -1):
                    ret.append(matrix[lrow - 1][i])
                lrow -= 1

            if fcol < lcol:
                for i in range(lrow - 1, frow - 1, -1):
                    ret.append(matrix[i][fcol])
                fcol += 1
        return ret
    
solution = Solution()
    
r = int(input("Enter number of rows: "))
c = int(input("Enter number of columns: "))
matrix = []
print("Enter the entries row-wise:")
for i in range(r):
    a = []
    for j in range(c):
        a.append(int(input()))
    matrix.append(a)
print("Spiral Matrix: ", solution.spiralOrder(matrix))