class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> o;
        int top = 0;
        int left = 0;
        int right = matrix[0].size() - 1;
        int bottom = matrix.size() - 1;
        if (matrix.empty())
        {
            return o;
        }
        while (left <= right && top <= bottom)
        {
            for (int i = left; i <= right; i++)
            {
                o.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++)
            {
                o.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    o.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    o.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return o;
    }
};