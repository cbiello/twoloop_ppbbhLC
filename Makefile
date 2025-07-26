# Top-level Makefile

QD_LIB_DIR = /ptmp/mpp/cbiello/Packages/qd-install/lib
CXX = g++
CXXFLAGS = -c -fPIC -I. -L$(QD_LIB_DIR)
LDLIBS = -lm -lqd

# Find all .cpp files recursively
CPP_FILES := $(shell find . -name '*.cpp')

# Create corresponding .o object file list
OBJ_FILES := $(CPP_FILES:.cpp=.o)

all: $(OBJ_FILES)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@ $(LDLIBS)

clean:
	find . -name '*.o' -delete
