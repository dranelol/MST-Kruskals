MST: MST.o DisjSet.o Adjacency.o Edge.o minHeap.o
	g++ -o MST MST.o DisjSet.o Adjacency.o Edge.o minHeap.o
MST.o: MST.cpp DisjSet.cpp Adjacency.cpp Edge.cpp minHeap.cpp
	g++ -c MST.cpp
DisjSet.o: DisjSet.cpp DisjSet.h
	g++ -c DisjSet.cpp
Adjacency.o: Adjacency.cpp Adjacency.h
	g++ -c Adjacency.cpp
Edge.o: Edge.cpp Edge.h
	g++ -c Edge.cpp
minHeap.o: minHeap.cpp minHeap.h
	g++ -c minHeap.cpp
clean:
	rm *.o MST
