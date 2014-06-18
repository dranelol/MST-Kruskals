//MST.cpp

//Programmer Information:
//		Class: CMPS 261
//		Section: 1
//		Project: #4
//		Name: Matthew Wallace
//		CLID: mbw5861
//		Submission date: 10/24/11

// Certification of Authenticity: 
// I, Matthew Wallace, certify that this assignment is entirely my own work.


#include <cstdlib>
#include "Adjacency.h"
#include "Edge.h"
#include "minHeap.cpp"
#include "DisjSet.h"
#include <iostream>
#include <vector>

using namespace std;
// Problem Statement: Given a number of vertices and edges, and given the 
// weights of each edge between the vertices, implement Kruskal's algorithm 
// to find the minimal spanning tree of the graph. 
// Problem Specification: You are to implement Kruskal's Algorithm for 
// generating the Minimal Spanning Tree for a graph. You are to follow 
// the algorithm as given in class. Your implementation should input a 
// graph, store it in an adjacency list, and output the set of edges from 
// the graph that make up the MST.
// Your implementation must utilize a templated minHeap class to hold the 
// edges that will be processed from smallest to largest, by weight. 
// The graph should be stored internally using an Adjacency List Class. 
// You should use your union-find/disjoint set class to assist in 
// determining when an edge will cause a cycle. 

// System Architecture Description
// Within the main application, two vectors will be used, one of type 
// Adjacency, and one of type Edge. The each index in Adjacency vector 
// will store a linked list of vertices adjacent to the vertex represented 
// by that index. The Edge vector will store all of the edges in the graph; 
// this will later be used to build the minimum heap. The minimum heap will 
// be of type edge and store the edges of the graph, ordered smallest to 
// largest by weight. A disjoint set will be used to check whether or not 
// the edge is already in the MST solution ( if the vertices are in the same
// partition, then they are already in the MST solution).
// Two Edge objects will be used, one to insert every edge into the Edge 
// vector, another to output the MST solution.

int main() 
{
    
    // integer initialization
    int numberOfEdges,numberOfVertices, vertex1Input, vertex2Input, weightInput=0;
    
    // read in the number of edges and vertices from the input 
    cin >> numberOfEdges;
    cin >> numberOfVertices;
    
    // create an adjacency list to hold the adjacent vertices to each vertex
    vector <Adjacency> list(numberOfVertices);
    
   
    // create a vector to store all the edges 
    vector <Edge> edgeVector(numberOfEdges);
    
    
    // loop to read in the vertices and weight values from the input into the 
    // adjacency list
    // also creates edges and stores them into the edge vector
    for(int h=0; h<numberOfEdges;h++)
    {
        cin >> vertex1Input >> vertex2Input >> weightInput;
        if (vertex1Input > numberOfVertices || vertex2Input > numberOfVertices)
        {
            h--;
            cout << "Vertex input too high! Try again." << endl;
        }
        else
        {
            
            list[vertex1Input-1].insert(vertex2Input, weightInput);
            Edge insertEdge(vertex1Input, vertex2Input, weightInput);
            edgeVector[h] = insertEdge;
        }
        
    }
    
     // create a heap to store all the edges from the edge vector
    minHeap<Edge> edgeHeap(edgeVector);
    
    // implementation of kruskal's algorithm
    
    // creates a disjoint set with the size of the number of the vertices
    // will be used to tell if both of the vertices are already on the graph
    // and will create a loop
    
    DisjSet comparisonSet(numberOfVertices);
    
    

  
    int acceptedEdges = 0;
    
    while (acceptedEdges < numberOfVertices -1)
    {
        Edge solutionEdge;
        
        solutionEdge = edgeHeap.findMin();
        
        edgeHeap.deleteMin(solutionEdge);
        
        int v1 = comparisonSet.find(solutionEdge.first());
        int v2 = comparisonSet.find(solutionEdge.second());
        if (v1 != v2)          
        {
            comparisonSet.unionSets(v1, v2);
            acceptedEdges++;
            
            cout << "From vertex " << solutionEdge.first() << " to " 
                 << solutionEdge.second() << ", at a cost of "
                 << solutionEdge.edgeWeight() << endl;
            
        }
        
        
    }
    return 0;
}

