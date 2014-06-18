//DisjSet.h

//Programmer Information:
//		Class: CMPS 261
//		Section: 1
//		Project: #4
//		Name: Matthew Wallace
//		CLID: mbw5861
//		Submission date: 10/24/11

// Certification of Authenticity:
// I, Matthew Wallace, certify that this assignment is entirely my own work.

#ifndef DISJSET_H
#define	DISJSET_H
#include <cstdlib>
#include <vector>


using namespace std;

class DisjSet
{
        public:
//    Class Operations
//
//    Prototype: DisjSet(int elements) : elementSet(elements)
//    Description: The constructor initializes the vector, of given size 
//    elements, so that each position contains the value -1.
//    Pre-condition: elements is a valid integer; elementSet is a valid vector 
//    of type integer
//    Post-condition: every position in the vector contains the value -1; each 
//    partition has one member
//    Cost analysis: O(n)                                                                                                                                          
//    Visibility: Public
    
    DisjSet(int elements);
    
//    Prototype: ~DisjSet()
//    Description: The destructor deallocates the vector.
//    Pre-condition: 
//    Post-condition: the memory used by the vector is destroyed
//    Cost analysis: O(1)                                                                                                                                          
//    Visibility: Public
    
    ~DisjSet();
    
//    Prototype: find(int x)
//    Description: The find function will return the lowest parent of the tree 
//    x is in. The find function is used both recursively by itself, and by the
//    union function. The function finds the parent by checking the value at 
//    the position designated with the value of position x. If the value in 
//    the position is greater than -1,  then the function is recursively 
//    called, passing the value as the parameter. If the value is less than 
//    0, then the current position is the parent, and it is returned.
//    Pre-condition: x is a valid integer.
//    Post-condition: The parent of the partition x is in is returned.
//    Cost analysis: O(1)
//    Visibility: Private
    
    int find(int x);
    
//    Prototype: unionSets(int root1, int root2)
//    Description: The unionSets function will combine the partition that 
//    root1 belongs to and the partition that root2 belongs to. 
//    Union-by-height is implemented here; if root2 is deeper than root1, 
//    then root2 becomes the new root. If the heights are the same, root1's 
//    height is updated, and root1 becomes the new root. 
//    Pre-condition: root1 and root2 are valid integers.
//    Post-condition: root1 and root2 are unioned into the same partition. 
//    Cost analysis: O(n)
//    Visibility: Public
    
    
    void unionSets(int root1, int root2);
    
private:
    
//    Class Attributes
//
//    Name: elementSet vector
//    Description: The vector will represents the list of cells. The value in 
//    each position in the vector will represent its parent, a member of the 
//    partition that the current cell has joined. If the cell has no children 
//    (the current cell is at the lowest level) then the value in that position
//    is -1; if the cell has children and is the root of the partition, then 
//    its value is the negative of its height. 
//    Type: integer vector
//    Range of Acceptable Values: The range will be specified by the user, the 
//    size of the vector will be the width of the grid multiplied by the 
//    length of the grid. 
        
    vector<int> elementSet;
};

#endif	

