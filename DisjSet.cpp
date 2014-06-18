//DisjSet.cpp

//Programmer Information:
//		Class: CMPS 261
//		Section: 1
//		Project: #3
//		Name: Matthew Wallace
//		CLID: mbw5861
//		Submission date: 10/12/11

// Certification of Authenticity:
// I, Matthew Wallace, certify that this assignment is entirely my own work.

#include "DisjSet.h"
DisjSet::DisjSet(int elements) : elementSet(elements)
{
    for (int i=0; i < elementSet.size(); i++)
    {
        elementSet[i]  = -1;
    }
}

void DisjSet::unionSets(int root1, int root2)
{
// edited 10-19-11, implementing union-by-weight

    if (root1 == root2)
    {
        return;
    }

	if (elementSet[root1] < elementSet[root2])
	{
		elementSet[root2] = elementSet[root2] + elementSet[root1];
		elementSet[root1] = root2;
	}

	else 
	{
		elementSet[root1] = elementSet[root1] + elementSet[root2];
		elementSet[root2] = root1;

	}

}

int DisjSet::find(int x)
{
    if ( elementSet[x] < 0)
    {
        return x;
    }
    else
    {
        return elementSet[x] = find(elementSet[x]);
    }
}

DisjSet::~DisjSet()
{
    elementSet.clear();
}
