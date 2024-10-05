#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    void fn(vector<vector<char>>& grid, int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
            return;
        }
        if (grid[i][j]=='0') return;
        grid[i][j]='0';
        fn(grid,i+1,j); 
        fn(grid,i-1,j); 
        fn(grid,i,j+1); 
        fn(grid,i,j-1); 
    }

    int numIslands(vector<vector<char>>& grid){
        int c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    fn(grid, i, j); 
                    c++;
                }
            }
        }
        return c;
    }
};

int main() {
    vector<vector<char>> grid={
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };
    Solution sol;
    cout<<"Number of islands: "<<sol.numIslands(grid)<<endl;
    return 0;
}
