//
//  bfs_cases.cpp
//  c++demo
//
//  Created by Mark Du on 2025-05-01.
//
#include <queue>

#include "bfs_cases.hpp"
/**
 BFS use queue to enqueue/dequeue each node
 n = number of nodes in graph
 g = adjacency list for unweighted graph
 s= start node e = end node && e >= 0, s < n
 
 function bfs(s, e)
 prev = solve(s) // do bfs starting at s
 
 return reconstructPath(s, e, prev)//finally, shortest path from s->e found
 
 funtion solve(s){
 q = queue
 q.enqueue(s0;
 visited = [false,...,false] //size n
 visited[s] = true;
 
 prev = [null,...,null] // size n
 while !q.isEmpty(){
 node = q.dequeue();
 neighbours = g.get(node);
 
 for next:neighbours {
 if (!visited[next]{
  q.enqueue(next);
 visited[next] = true;
 prev[next] = node;
 
 }
 return prev;
 }
 
 function reconstructPath(s,e,prev){
 path = []
 for(at = e; at != null; at = prev[at]{
  path.add(at)
 }
 path.reverse();
 if path[0] == s return path;
 return [];
 }
 */

DungeonSolver::DungeonSolver(const std::vector<std::vector<char>> &g): grid(g){
  rows = g.size();
  cols = g[0].size();
  visited.assign(rows, std::vector<bool>(cols,false));
}

int DungeonSolver::bfs(){
  std::queue<Cell> q;
  Cell start;
  //find entrance point and mark it
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      //in case entrance not in (0,0)
      if (grid[i][j] == 'S') {
        start = {i,j, 0};
        visited[i][j] = true;
        q.push(start);
      }
    }
  }
    
  while (!q.empty()) {
    Cell current = q.front();
    q.pop();
    
    if(grid[current.x][current.y] == 'E'){
      return current.dist;
    }
    
  for (int k = 0; k < 4; k++) {
    int nx = current.x + dx[k];
    int ny = current.y + dy[k];
    
    if(nx >= 0 && ny >= 0 && nx < rows && ny < cols && !visited[nx][ny] && grid[nx][ny] != '#'){
      visited[nx][ny] = true;
      q.push({nx,ny,current.dist + 1});
    }
      
  }
  }
  
  return -1;
}
