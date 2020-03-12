TARGET=./sorting/QuickSort.cpp
LIB=./sorting/lib/DoubleVector.cpp

# 编译源文件
compile:
	# Compile
	g++ ${TARGET} ${LIB}

# 运行编译后的可执行文件
run: compile
	# Run
	./a.out

# 删除可执行文件
clean:
	# Clean
	rm -rf *.out
