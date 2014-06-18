// Edge.cpp

//Programmer Information:
//		Class: CMPS 261
//		Section: 1
//		Project: #4
//		Name: Matthew Wallace
//		CLID: mbw5861
//		Submission date: 10/24/11

// Certification of Authenticity: 
// I, Matthew Wallace, certify that this assignment is entirely my own work.

#include "Edge.h"



// Default constructor to create an edge with no data.
Edge::Edge()
{
    theEdge.v1 = 0;
    theEdge.v2 = 0;
    theEdge.weight = 0;
}
    

    //Default constructor to create an edge with incident
    //vertices v1 and v2, and the weight of the edge
Edge::Edge( int v1, int v2, int weight)
{
    theEdge.v1 = v1;
    theEdge.v2 = v2;
    theEdge.weight = weight;
}

    //Member function to return the integer representation
    //of the first incident vertex.
int Edge::first()
{
    return theEdge.v1;
}

//Member function to return the integer representation
//of the second incident vertex.
int Edge::second()
{
    return theEdge.v2;
}

//Member function to return the integer weight of
//the edge.
int Edge::edgeWeight()
{
    return theEdge.weight;
}

//Overloaded assignment operator.
void Edge::operator=( Edge rhs )
{
    theEdge.v1 = rhs.theEdge.v1;
    theEdge.v2 = rhs.theEdge.v2;
    theEdge.weight = rhs.theEdge.weight;
}

//Overloaded less than operator
bool Edge::operator<( Edge rhEdge )
{
    bool isSmaller = false;
    
    if (theEdge.weight < rhEdge.theEdge.weight)
    {
        isSmaller = true;
    }
    
    return isSmaller;
}
