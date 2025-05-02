//
//  bfs_cases.hpp
//  c++demo
//
//  Created by Mark Du on 2025-05-01.
//

#ifndef bfs_cases_hpp
#define bfs_cases_hpp

#include <stdio.h>
#include <vector>
struct Cell {
  int x, y, dist;
};

class DungeonSolver{
private:
  std::vector<std::vector<char>> grid;
  std::vector<std::vector<bool>> visited;
  size_t rows, cols;
  int dx[4] = {1, -1, 0,  0};
  int dy[4] = {0,  0, 1, -1};
  
public:
  DungeonSolver(const std::vector<std::vector<char>> &g);
  int bfs();
};

#endif /* bfs_cases_hpp */
