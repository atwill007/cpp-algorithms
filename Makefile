SORT_TARGET=./sorting/QuickSort.cpp
SORT_LIB=./sorting/lib/DoubleVector.cpp

compileSorting:
	g++ ${SORT_TARGET} ${SORT_LIB}

runSorting:
	./sorting/a.out
