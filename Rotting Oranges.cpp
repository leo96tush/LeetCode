class Solution {
public:
    int dr[4] = { -1, 0, 1, 0} ;
    int dc[4] = {0, -1, 0, 1} ;

    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size() ;
        int col = grid[0].size() ;

        queue<int> queue ;
        map<int, int> depth ;

        for ( int r = 0 ; r < row ; r++ ) {
            for ( int c = 0 ; c < col ; c++ ) {
                if ( grid[r][c] == 2 ) {
                    int code = r * col + c ;
                    queue.push(code) ;
                    depth[code] = 0 ;
                }
            }
        }

        int ans = 0 ;
        while (!queue.empty()) {
            int code = queue.front() ;
            queue.pop() ;
            int r = code / col , c = code % col ;
            for ( int k = 0 ; k < 4 ; k++ ) {
                int nr = r + dr[k] ;
                int nc = c + dc[k] ;
                if (nr >= 0 && nr < row && nc >= 0 && nc < col && grid[nr][nc] == 1) {
                    grid[nr][nc] = 2 ;
                    int ncode = nr * col + nc ;
                    queue.push(ncode) ;
                    depth[ncode] = depth[code] + 1 ;
                    ans = depth[ncode] ;
                }
            }
        }

        for ( vector<int> vec : grid) {
            for ( int c : vec ) {
                if ( c == 1 ) return -1 ;
            }
        }

        return ans ;
    }
};