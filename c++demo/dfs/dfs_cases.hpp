//
//  dfs_cases.hpp
//  c++demo
//
//  Created by Mark Du on 2025-04-30.
//

#ifndef dfs_cases_hpp
#define dfs_cases_hpp

#include <stdio.h>
#include <vector>
class MyDFS{
private:
  int n;
  std::vector<std::vector<int>> adj;
  std::vector<bool> visited;
  
public:
  MyDFS(int size);
  void addEdge(int u, int v, bool undirected = true);
  void dfs(int node);
  void resetVisited();
  void printAdjList();
  int countComponents();
};

#endif /* dfs_cases_hpp */
