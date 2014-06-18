// Adjacency.h

//Programmer Information:
//		Class: CMPS 261
//		Section: 1
//		Project: #4
//		Name: Matthew Wallace
//		CLID: mbw5861
//		Submission date: 10/24/11

// Certification of Authenticity: 
// I, Matthew Wallace, certify that this assignment is entirely my own work.


                        
                       

#ifndef ADJACENCY_H
#define	ADJACENCY_H

#include <vector>

using namespace std;

// Name: Adjacency
// Description: The Adjacency class acts as a data object to store a linked 
// list of adjacent vertices to a vertex

class Adjacency
{
    private:
        
// Name: AdjacencyVertex struct
// Description: Holds the information for each adjacent vertex in two 
// integers, int weight and int vertex.
// Type: struct AdjacencyVertex
// Range of Acceptable Values: The ranges of each integer will be 
// specified by user input.

        struct AdjacencyVertex
        {
            int weight;
            int vertex;  


            AdjacencyVertex *nextVertex;
        };
        
// Name: AdjacencyVertex pointer firstVertex
// Description: Points to the first adjacent vertex in the list.
// Type: AdjacencyVertex pointer 
// Range of Acceptable Values: Valid memory address
    AdjacencyVertex *firstVertex;
    
// Name: AdjacencyVertex pointer lastVertex
// Description: Points to the last adjacent vertex in the list.
// Type: AdjacencyVertex pointer 
// Range of Acceptable Values: Valid memory address  
    
    AdjacencyVertex *lastVertex;
    
// Name: AdjacencyVertex pointer currentAccess
// Description: Points to the current adjacent vertex used by the 
// accessValues() function
// Type: AdjacencyVertex pointer 
// Range of Acceptable Values: Valid memory address

    AdjacencyVertex *currentAccess;
    
// Name: numberOfAdjacentVertices integer
// Description: The total number of adjacent vertices in the list
// Type: integer
// Range of Acceptable Values: derived from the user input

    int numberOfAdjacentVertices;
     
      public:
   
// Prototype: Adjacency()
// Description: The constructor initializes the class object; setting each 
// pointer to null, and the number of adjacent vertices to 0.
// Pre-condition: N/A
// Post-condition: Each of the pointers are set to null, the number of adjacent 
// vertices is set to 0.
// Cost analysis: O(1)                                                                                                                                          
// Visibility: Public

    Adjacency();
    
// Prototype: void insert(int v2, int w)
// Description: Inserts an Adjacency object at the end of the list, with values 
// v2 as the adjacent vertex, and w as the weight between the vertex and 
// the adjacent vertex.
// Pre-condition: v2 and w are valid integers
// Post-condition: If the adjacent vertex is the first vertex, firstVertex,
// lastVertex, and currentAccess are set to point to the new adjacent 
// vertex; if not, only lastVertex is set to point to the new adjacent vertex. 
// In both cases, numberOfAdjacentVertices is incremented.
// Cost analysis: O(1)                                                                                                                                          
// Visibility: Public  
    void insert(int v2, int w);
    
//Prototype: vector<int> accessValues
//Description: Returns a vector of size two; its values represent the 
// adjacent vertex and the weight associated with the adjacency. 
//Pre-condition: N/A
//Post-condition: Returns a vector of size two; the first position will 
// store the integer representation of the adjacent vertex, the second 
// position will store the integer representation of the weight of the 
// edge between the two. The pointer currentAccess is updated to 
// point to the next adjacent vertex.
//Cost analysis: O(1)                                                                                                                                          
//Visibility: Public   
    vector<int> accessValues();
    
    
//Prototype: int numberOfVertices()
//Description: Returns the number of adjacent vertices
//Pre-condition: N/A
//Post-condition: Returns the number of adjacent vertices                                                                          
//Cost analysis: O(1)                                                                                                                                          
//Visibility: Public

    int numberOfVertices();
};



#endif	/* ADJACENCY_H */

