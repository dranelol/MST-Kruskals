// minHeap.cpp


//Programmer Information:
//		Class: CMPS 261
//		Section: 1
//		Project: #4
//		Name: Matthew Wallace
//		CLID: mbw5861
//		Submission date: 10/24/11

// Certification of Authenticity: 
// I, Matthew Wallace, certify that this assignment is entirely my own work.



#include "minHeap.h"
#include <iostream>


template<class HeapType>
minHeap<HeapType>::minHeap( vector<HeapType> heapItems) 
: heap(heapItems.size() + 10), heapSize(heapItems.size())
{
    for(int i=0;i<heapItems.size();i++)
    {
        heap[i+1] = heapItems[i];
    }
    
    buildHeap();
}

template<class HeapType>
bool minHeap<HeapType>::isEmpty()
{
    bool heapIsEmpty = false;
    
    if (heap.empty() == true)
    {
        heapIsEmpty = true;
    }
    
    return heapIsEmpty;
    
}

template<class HeapType>
void minHeap<HeapType>::deleteMin(HeapType& deleteItem)
{
    if (isEmpty())
    {
        return;
    }
    
    heap[1] = heap[heapSize--];
    
    percolateDown(1);
}

template<class HeapType>
void minHeap<HeapType>::buildHeap()
{
    for (int i=heapSize/2;i>0;i--)
    {
        percolateDown(i);
    }
}

template<class HeapType>
void minHeap<HeapType>::percolateDown(int node)
{
    int child;
    HeapType temp = heap[node];
    
    for( ;node*2 <=heapSize; node = child)
    {
        child = node * 2;
        
        if (child != heapSize && heap[child+1] < heap[child])
        {
            child++;
        }
        
        if (heap[child] < temp)
        {
            heap[node] = heap[child];
        }
        
        else
        {
            break;
        }
    }
    heap[node] = temp;
}



template<class HeapType>
const HeapType& minHeap<HeapType>::findMin() const
{
    return heap[1];
}
    


