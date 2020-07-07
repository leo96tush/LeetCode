class Solution {
    public boolean check(int[][] grid , int i , int j) {
        Integer rows = grid.length ;
        Integer cols = grid[0].length ;

        if (i >= 0 && i < rows && j >= 0 && j < cols) return true ;

        return false ;

    }

    public int islandPerimeter(int[][] grid) {
        Integer x_dir[] = {0, 1, 0, -1} ;
        Integer y_dir[] = {1, 0, -1, 0} ;

        Integer count = 0 ;

        for ( Integer i = 0 ; i < grid.length ; i++ ) {
            for ( Integer j = 0 ; j < grid[0].length ; j++) {
                if (grid[i][j] == 1) {
                    for (Integer k = 0 ; k < 4 ; k++) {
                        if (check(grid , i + x_dir[k] , j + y_dir[k]) == false) count++ ;
                        else if (check(grid , i + x_dir[k] , j + y_dir[k]) == true && grid[i + x_dir[k]][j + y_dir[k]] == 0) count++ ;
                    }
                }
            }
        }
        return count ;
    }
}