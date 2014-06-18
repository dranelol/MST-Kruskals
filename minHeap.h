//minHeap.h

//Programmer Information:
//		Class: CMPS 261
//		Section: 1
//		Project: #4
//		Name: Matthew Wallace
//		CLID: mbw5861
//		Submission date: 10/24/11
//           

// Certification of Authenticity: 
// I, Matthew Wallace, certify that this assignment is entirely my own work.


#ifndef MINHEAP_H
#define	MINHEAP_H

#include <vector>

using namespace std;

//Name: minHeap
//Description: The heap stores the edges of the graph, sorted least to greatest 
// by weight

template <class HeapType>
class minHeap
{
    public:

//Prototype: minHeap( vector<HeapType> heapItems)
//Description: The constructor builds the heap according to the vector of edges 
// passed in
//Pre-condition: heapItems is a valid vector of type HeapType
//Post-condition: heap[i+1] is set to equal the values in heapItems[i], looped, 
// the heap is built
//Cost analysis: O(n)                                                                                                                                          
//Visibility: Public

        minHeap( vector<HeapType> heapItems);
 
//Prototype:  bool isEmpty()
//Description: Returns whether or not the heap is empty
//Pre-condition: N/A
//Post-condition: Returns false if the heap is full, returns true if the heap 
// is empty
//Cost analysis: O(1)                                                                                                                                          
//Visibility: Public
        
        bool isEmpty();
        
//Prototype:  void deleteMin(HeapType& deleteItem)
//Description: Deletes the passed object deleteItem from the heap
//Pre-condition: N/A
//Post-condition: The first value in the heap becomes the last value; 
// percolateDown is called with 1.
//Cost analysis: O(1)                                                                                                                                          
//Visibility: Public

        void deleteMin(HeapType& deleteItem);
        
//Prototype:  const HeapType& findMin() const
//Description: Returns the first value in the heap
//Pre-condition: N/A
//Post-condition: The first value in the heap is returned.
//Cost analysis: O(1)                                                                                                                                          
//Visibility: Public

        const HeapType& findMin() const;
        
    
    private:
        
//Name: heapSize integer
//Description: Holds the size of the heap
//Type: integer
//Range of Acceptable Values: valid integer

        int heapSize;
 
//Name: vector<HeapType> heap
//Description: A vector, of templated type HeapType, that holds all the 
//Type: AnEdge struct
//Range of Acceptable Values: the vertices and weight are all input by the user
        
        vector<HeapType> heap;

//Prototype:   void buildHeap()
//Description: The function builds the heap from a collection of items
//Pre-condition: N/A
//Post-condition: The heap is built
//Cost analysis: O(n)                                                                                                                                          
//Visibility: Private

        void buildHeap();
 
//Prototype:   void percolateDown(int node)
//Description: Percolates values down within the heap
//Pre-condition: node is a valid integer
//Post-condition: The root of the heap is replaced with the last element. The 
// new root is compared with its children; if they are not in the correct 
// order, the element is swapped with one of its children and the comparison 
// is repeated.
//Cost analysis: O(n)                                                                                                                                          
//Visibility: Private
        
        void percolateDown(int node);
        
    
};



#endif	/* MINHEAP_H */

