class Solution {
public:
	// Checking for the cell existing on the grid
	bool check(vector<vector<int>>& grid , int i , int j) {
		int rows = grid.size() , cols = grid[0].size() ;
		if (i >= 0 && i < rows && j >= 0 && j < cols) return true ;
		return false ;
	}

	int islandPerimeter(vector<vector<int>>& grid) {

		int x_dir[4] = {0, -1, 0, 1} ;
		int y_dir[4] = { -1, 0, 1, 0} ;

		int rows = grid.size() , cols = grid[0].size() ;

		int count = 0 ;

		// Visiting each cell and adding perimeter
		// if next cells from four sides is either zero
		// or the next cell does not exist on the grid

		for (int i = 0 ; i < rows ; i++) {
			for (int j = 0 ; j < cols ; j++) {
				if (grid[i][j] == 1) {
					for (int k = 0 ; k < 4 ; k++) {
						if (check(grid, i + x_dir[k], j + y_dir[k]) == false) count++ ;
						else if (check(grid, i + x_dir[k], j + y_dir[k]) == true && grid[i + x_dir[k]][j + y_dir[k]] == 0) count++ ;
					}
				}
			}
		}
		return count ;
	}
};