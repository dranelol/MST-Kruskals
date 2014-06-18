// Adjacency.cpp

//Programmer Information:
//		Class: CMPS 261
//		Section: 1
//		Project: #4
//		Name: Matthew Wallace
//		CLID: mbw5861
//		Submission date: 10/24/11
                
  // Certification of Authenticity: 
// I, Matthew Wallace, certify that this assignment is entirely my own work.              



#include "Adjacency.h"
#include <iostream>


Adjacency::Adjacency()
{
    firstVertex = NULL;
    lastVertex = NULL;
    currentAccess = NULL;
    numberOfAdjacentVertices = 0;
    
    
}



    
void Adjacency::insert(int v2, int w)
{
    
    // if the vertex to be added is the first adjacent vertex
    if (firstVertex == NULL)
    {
       // cout << "inserting into fresh list" << endl;
        // create the new vertex to be added
        AdjacencyVertex *newAdjacentVertex;
        newAdjacentVertex = new AdjacencyVertex;
        // set its values to the passed parameters
        newAdjacentVertex->vertex = v2;
        newAdjacentVertex->weight = w;
        // set it to be both the first and last vertex in the list
        firstVertex = newAdjacentVertex;
        lastVertex = newAdjacentVertex;
        currentAccess = firstVertex;
        numberOfAdjacentVertices++;
    }
    // otherwise, add the vertex to the end of the list of adjacent vertices
    else
    {
       // create the new vertex to be added
        AdjacencyVertex *newAdjacentVertex;
        newAdjacentVertex = new AdjacencyVertex;
        // set its values to the passed parameters
        newAdjacentVertex->vertex = v2;
        newAdjacentVertex->weight = w;
        // place it last in the list of adjacent vertices
        lastVertex->nextVertex = newAdjacentVertex;
        // update last to point to the added yertex
        lastVertex = newAdjacentVertex;
        numberOfAdjacentVertices++;
    }
   
       
}




vector<int> Adjacency::accessValues()
{
    if (currentAccess == NULL)
    {
        cout << "Can't access from an empty vertex!" << endl;
    }
    
    else
    {   
       // creates a vector to return the values associated with that vertex
        
        vector<int> returnVals(2);
        // stores those values
        returnVals[0] = currentAccess->vertex;
        returnVals[1] = currentAccess->weight;
        // updates the currentAccess pointer to point to the next vertex in the 
        // list; 
        // each one will only ever need to be accessed once
        currentAccess = currentAccess->nextVertex;
        // return the vector
        return returnVals;
    }
}

int Adjacency::numberOfVertices()
{
    return numberOfAdjacentVertices;
}


