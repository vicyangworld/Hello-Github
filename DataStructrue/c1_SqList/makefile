appname := main
CXX := g++
#CXXFLAGS := -Wall -g
#srcfiles := $(shell find . -maxdepth 1 -name "*.cpp")
#objects  := $(patsubst %.cpp, %.o, $(srcfiles))


objects = main.o 
$(appname) : $(objects)
	$(CXX) -o $(appname) $(objects) 

main.o:SqList.h

clean :
	rm $(appname) $(objects)
