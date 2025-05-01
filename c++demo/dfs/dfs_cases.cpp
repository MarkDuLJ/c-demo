//
//  dfs_cases.cpp
//  c++demo
//
// Depth First Search
//  Created by Mark Du on 2025-04-30.
//

#include "dfs_cases.hpp"
#include <iostream>
using namespace std;
/**
 ***sudo code***
 * Global or class scope variables
 * n = number of node in the graph
 * g = adjacency list
 * visited = [false,..., false] // size = n
 *
 *function dfs(at)
 *   if visited[at] return;
 *        visited[at] = true
 *
 *  neighours = graph[at];
 *  for next in neighbours
 *      dfs(next)
 */

MyDFS::MyDFS(int size): n(size){
  adj.resize(size);
  visited.resize(size,false);
}

void MyDFS::addEdge(int u, int v,bool undirected){
  adj[u].push_back(v);
  if(undirected) adj[v].push_back(u);
}

void MyDFS::dfs(int node){
  visited[node] = true;
  cout << "Visited: " << node << endl;
  for (int neighbor: adj[node]) {
    if(!visited[neighbor]){
      dfs(neighbor);
    }
  }
}

//reset visited value to false before every run
void MyDFS::resetVisited(){
  fill(visited.begin(), visited.end(), false);
}

//show adjacent list
void MyDFS::printAdjList() {
  for (int i = 0; i < adj.size(); i++) {
    cout << i <<":";
    for (int j : adj[i]) {
      cout << j << " ";
    }
    cout << endl;
  }
}

int MyDFS::countComponents(){
  int components = 0;
  for (int i = 0; i < n; i++) {
    if(!visited[i]){
      cout << "Component " << ++components <<":\n";
      dfs(i);
      cout << endl;
    }
  }
  return components;
}
