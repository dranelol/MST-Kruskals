MST-Kruskals
============

C++ implementation of the Kruskal's algortihm to solve the minimal spanning tree for a graph.

Given the number of vertices and edges, and given the weights of each edge between the vertices, 
this implementation of Kruskal's algorithm finds the minimal spanning tree of the graph.

MinHeap, Adjacency, and Disjoint Set data structures were implemented to use during this assignment.

This program first takes each edge in the graph as input; each edge knows its vertices and its weight.
These edges are then stored in a min-heap data structure, using an adjacency list to keep track 
of all adjacencies between vertices.
Throughout the algorithm, an disjoint set data structure is also utilized to know if previous vertices have 
been seen on the current MST, and not include them if they are, as they would create a loop. 


