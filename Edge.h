// Edge.h

//Programmer Information:
//		Class: CMPS 261
//		Section: 1
//		Project: #4
//		Name: Matthew Wallace
//		CLID: mbw5861
//		Submission date: 10/24/11

// Certification of Authenticity: 
// I, Matthew Wallace, certify that this assignment is entirely my own work.

#ifndef EDGE_H
#define	EDGE_H
//Name: Edge
//Description: The Edge data object holds the information for an edge: 
// the two vertices related to the edge, and the weight associated with the 
// edge

class Edge {
        public:
    
//Prototype: Edge()
//Description: The constructor initializes the values in theEdge's struct all 
// to 0.
//Pre-condition: N/A
//Post-condition: Each of the values in theEdge's struct are all set to 0.
//Cost analysis: O(1)                                                                                                                                          
//Visibility: Public


	Edge();

//Prototype: Edge( int v1, int v2, int weight)
//Description: The constructor initializes the values in theEdge's struct to 
// the values passed in
//Pre-condition: N/A
//Post-condition: Each of the values in theEdge's struct are all set to the 
//values passed in
//Cost analysis: O(1)                                                                                                                                          
//Visibility: Public

	Edge( int v1, int v2, int weight);

//Prototype: int first()
//Description: Returns the integer value of the first vertex
//Pre-condition: N/A
//Post-condition: Returns the integer value of the first vertex
//Cost analysis: O(1)                                                                                                                                          
//Visibility: Public

	int first();

//Prototype: int second()
//Description: Returns the integer value of the second vertex
//Pre-condition: N/A
//Post-condition: Returns the integer value of the second vertex
//Cost analysis: O(1)                                                                                                                                          
//Visibility: Public

	int second();

//Prototype: int edgeWeight()
//Description: Returns the integer value of the weight
//Pre-condition: N/A
//Post-condition: Returns the integer value of the weight
//Cost analysis: O(1)                                                                                                                                          
//Visibility: Public

	int edgeWeight();

//Prototype: void operator=( Edge rhs )
//Description: Overloaded assignment operator
//Pre-condition: rhs is a valid Edge, the edge calling the assignment operator 
// is a valid edge 
//Post-condition: All of the values in theEdge's struct are set to the values 
// in rhs's struct
//Cost analysis: O(1)                                                                                                                                          
//Visibility: Public

	void operator=( Edge rhs );

//Prototype: bool operator<( Edge rhEdge )
//Description: Overloaded less than operator
//Pre-condition: rhEdge is a valid Edge, the edge calling the less than 
// operator is a valid edge 
//Post-condition: True is returned if theEdge's weight is less than rhEdge's 
// weight, false otherwise.
//Cost analysis: O(1)                                                                                                                                          
//Visibility: Public
        
	bool operator<( Edge rhEdge );

private:
    
        
//Name: AnEdge struct
//Description: Holds the data for an edge with three integers: v1, v2, 
// representing the vertices, and weight, representing the weight. 
//Type: AnEdge struct
//Range of Acceptable Values: the vertices and weight are all input by the user
    
	struct AnEdge {
		int v1;
		int v2;
		int weight;
	};
        
//Name: AnEdge theEdge
//Description: Instantiation of the AnEdge struct
//Type: AnEdge
//Range of Acceptable Values: the vertices and weight associated with AnEdge 
// are input by the user

	AnEdge theEdge;
};




#endif	/* EDGE_H */

